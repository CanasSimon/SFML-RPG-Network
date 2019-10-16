//
// Created by Admin on 14/10/19.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
#include <SFML/Network/TcpSocket.hpp>

const int CRIT_CHANCE = 10;

enum class State {
    IDLE,
    ATTACK,
    DEFEND
};

class Player {
public:
    void SetName(std::string newName);

    std::string GetName();

    void InitPlayer(std::vector<char> data);

    void SetState(State newState);

    State GetState();

    int GetMaxHealth();

    int GetHealth();

    int GetAttack();

    int GetDefense();

    int GetEvasion();

    void GetDamage(int damage);

    void Attack(Player& target);

    sf::TcpSocket* socket;

private:
    State state = State::IDLE;

    std::string name = "";

    int maxHealth = 20;
    int health = maxHealth;

    int attack = 0;
    int defense = 0;
    int evasion = 0;
};

#endif //PLAYER_H
