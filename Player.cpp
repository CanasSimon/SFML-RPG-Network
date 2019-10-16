#include "Player.h"


void Player::SetName(std::string newName) {
    name = newName;
}

std::string Player::GetName() {
    return name;
}

void Player::InitPlayer(std::vector<char> data) {
    int loopPos;
    std::vector<char> buffer;

    for (int i = 2; i < data.size(); ++i) {
        if(data[i] == '|') {
            switch (loopPos) {
                case 0: {
                    std::string str(buffer.begin(), buffer.end());
                    name = str;
                    break;
                }
                case 1: {
                    int x;
                    for (auto it = 0; it < buffer.size(); it++) {
                        x = x * 10 + (buffer[it] - '0');
                    }
                    attack = x;
                    break;
                }
                case 2: {
                    int x;
                    for (auto it = 0; it < buffer.size(); it++) {
                        x = x * 10 + (buffer[it] - '0');
                    }
                    defense = x;
                    break;
                }
                case 3: {
                    int x;
                    for (auto it = 0; it < buffer.size(); it++) {
                        x = x * 10 + (buffer[it] - '0');
                    }
                    evasion = x;
                    break;
                }
            }

            loopPos++;
            buffer.clear();
            continue;
        }
        buffer.push_back(data[i]);
    }
}

void Player::SetState(State newState) {
    state = newState;
}

State Player::GetState() {
    return state;
}

int Player::GetMaxHealth() {
    return maxHealth;
}

int Player::GetHealth() {
    return health;
}

int Player::GetAttack() {
    return attack;
}

int Player::GetDefense() {
    return defense;
}

int Player::GetEvasion() {
    return evasion;
}

void Player::GetDamage(int damage) {
    int loss = (damage - defense >= 0) ? damage - defense : 0;
    health -= loss;
    std::cout << name << " lost " << loss << " HP!\n";
}

void Player::Attack(Player& target) {
    if(rand() % 101 < target.evasion) {
        std::cout << target.name << " evaded the attack!\n";
    } else if (target.state == State::DEFEND) {
        target.GetDamage(attack / 2);
    } else {
        target.GetDamage(attack);
    }
}