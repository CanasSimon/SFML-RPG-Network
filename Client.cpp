#include <SFML/Network.hpp>
#include <iostream>
#include <sstream>
#include <conio.h>

const int MAX_CP = 10;

struct PlayerAttributes {
    char name[40] = "";

    int attack = 0;
    int defense = 0;
    int evasion = 0;
};

void InitStats(PlayerAttributes &player) {
    int competencePoints = MAX_CP;

    do {
        std::cout << "Assign attack (Available points: " << competencePoints << ")\n";
        std::cin >> player.attack;

        if (competencePoints - player.attack < 0) std::cout << "Not enough points!\n";
        else {
            competencePoints -= player.attack;
            break;
        }
    } while (competencePoints - player.attack < 0);

    do {
        if (competencePoints == 0) break;
        std::cout << "Assign defense (Available points: " << competencePoints << ")\n";
        std::cin >> player.defense;

        if (competencePoints - player.defense < 0) std::cout << "Not enough points!\n";
        else {
            competencePoints -= player.defense;
            break;
        }
    } while (competencePoints - player.defense < 0);

    do {
        if (competencePoints == 0) break;
        std::cout << "Assign evasion (Available points: " << competencePoints << ")\n";
        std::cin >> player.evasion;

        if (competencePoints - player.evasion < 0) std::cout << "Not enough points!\n";
        else {
            competencePoints -= player.evasion;
            break;
        }
    } while (competencePoints - player.evasion < 0);

    std::cout << "Attack: " << player.attack << "\n";
    std::cout << "Defense: " << player.defense << "\n";
    std::cout << "Evasion: " << player.evasion << "\n";
}

int main() {
    PlayerAttributes playerStats;

    std::cout << "Set your name:";
    std::cin >> playerStats.name;

    InitStats(playerStats);

    while (true) {
        std::cout << "Is this correct? (y/n)\n";
        char key;
        std::cin >> key;

        if (key == 'y') break;
        else if (key == 'n') InitStats(playerStats);
        else std::cout << "Invalid symbol\n";
    }

    sf::IpAddress ip = "localhost";
    sf::TcpSocket socket;

    std::ostringstream oss;
    oss << "b|" << playerStats.name <<
        "|" << playerStats.attack <<
        "|" << playerStats.defense <<
        "|" << playerStats.evasion;

    std::string send = oss.str();

    socket.connect(ip, 27272);
    socket.send(send.c_str(), 100);

    while (true) {
        char answer[1];
        char data[100];
        size_t received;

        socket.receive(data, 100, received);
        std::cout << data << "T e s t 1\n";
        socket.receive(data, 10, received);
        std::cout << data << "T e s t 2\n";
        if (data[0] == '1') {
            socket.receive(data, 100, received);
            std::cout << data << "T e s t 3\n";
            do {
                std::cin >> answer;

                if (answer[0] != 'a' && answer[0] != 'd') std::cout << "Invalid symbol\n";
            } while (answer[0] != 'a' && answer[0] != 'd');

            socket.send(answer, 1);
        }
        socket.receive(data, 100, received);
        std::cout << data << "T e s t 4\n";
        if (data[0] == 'q') break;
    }
    socket.send("q", 1);

    return EXIT_SUCCESS;
}