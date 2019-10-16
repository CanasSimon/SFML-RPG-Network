#pragma comment(lib, "ws2_32.lib")

#include <SFML/Network.hpp>
#include <iostream>
#include <conio.h>
#include "TextManager.h"
#include "Player.h"

int main() {
    TextManager textManager = {};

    Player player1 = {};
    Player player2 = {};

    int turnNumber = 0;

    srand(time(NULL));

    sf::TcpListener listener;
    sf::SocketSelector selector;
    std::vector<sf::TcpSocket> clients;

    listener.listen(27272);
    selector.add(listener);

    sf::TcpSocket socket1;
    std::cout << "Waiting for connection...\n";
    listener.accept(socket1);
    std::cout << "Player 1 connected\n";
    player1.socket = &socket1;
    std::cout << socket1.getRemoteAddress();

    char data[100];
    size_t received;
    socket1.receive(data, 100, received);
    {
        std::vector<char> dataVec(std::begin(data), std::end(data));
        player1.InitPlayer(dataVec);
    }
    textManager.DrawStats(player1);

    sf::TcpSocket socket2;
    std::cout << "Waiting for connection...\n";
    listener.accept(socket2);
    std::cout << "Player 2 connected\n";
    player2.socket = &socket2;
    std::cout << socket2.getRemoteAddress();

    socket2.receive(data, 100, received);
    {
        std::vector<char> dataVec(std::begin(data), std::end(data));
        player2.InitPlayer(dataVec);
    }
    textManager.DrawStats(player2);

    while (true) {
        if (turnNumber % 2 == 0) {
            player1.socket->send((textManager.DrawStatus(player1) +
                                  textManager.DrawStatus(player2)).c_str(), 150);

            player2.socket->send((textManager.DrawStatus(player1) +
                                  textManager.DrawStatus(player2)).c_str(), 150);
        } else {
            player1.socket->send((textManager.DrawStatus(player2) +
                                  textManager.DrawStatus(player1)).c_str(), 150);

            player2.socket->send((textManager.DrawStatus(player2) +
                                  textManager.DrawStatus(player1)).c_str(), 150);
        }
        std::cout << "T e s t 1\n";

        player1.socket->send("Test1", 10);
        player2.socket->send("Test2", 10);
        player1.socket->send(textManager.PromptChoice(player1).c_str(), 100);
        std::cout << "T e s t 2\n";

        player1.socket->receive(data, 1, received);
        if (data[0] == 'a') player1.SetState(State::ATTACK);
        else if (data[0] == 'd') player1.SetState(State::DEFEND);
        std::cout << "T e s t 3\n";

        player1.socket->send(textManager.PrintState(player1).c_str(), 100);
        player2.socket->send(textManager.PrintState(player1).c_str(), 100);
        std::cout << "T e s t 4\n";

        if (player1.GetState() == State::ATTACK) {
            player1.Attack(player2);
            if (player2.GetHealth() <= 0) {
                textManager.EndGame(player1, player2);
                break;
            }
        }

        std::swap(player1, player2);
        turnNumber++;
    }

    std::cout << "End of battle!\n";

    system("pause");
    return EXIT_SUCCESS;
}