//
// Created by Admin on 14/10/19.
//

#include "TextManager.h"

void TextManager::DrawStats(Player& playerStat) {
    std::cout << LINE_SEP;
    std::cout << playerStat.GetName() << "\n";
    std::cout << "Attack: " << playerStat.GetAttack() << "\n";
    std::cout << "Defense: " << playerStat.GetDefense() << "\n";
    std::cout << "Evasion: " << playerStat.GetEvasion() << "\n";
}

std::string TextManager::DrawStatus(Player& playerStat) {
    return LINE_SEP
           + playerStat.GetName() + "\n"
           + "Health: " + std::to_string(playerStat.GetHealth())
           + "/" + std::to_string(playerStat.GetMaxHealth()) + "\n";
}

std::string TextManager::PromptChoice(Player& playerStat) {
    return LINE_SEP
           + playerStat.GetName() + "\n"
           + "Select an action to perform:\n"
           + "- (A)ttack\n"
           + "- (D)efend\n";
}

std::string TextManager::PrintState(Player &playerStat) {
    switch (playerStat.GetState()) {
        default: {
            return playerStat.GetName() + " skips their turn!\n";
        }
        case State::ATTACK: {
            return playerStat.GetName() + " attacks!\n";
        }
        case State::DEFEND: {
            return playerStat.GetName() + " is defending!\n";
        }
    }
}

void TextManager::EndGame(Player& player1, Player& player2) {
    std::cout << LINE_SEP;
    std::cout << player2.GetName() << " is KO...\n";
    std::cout << player1.GetName() << " wins!!\n";
}
