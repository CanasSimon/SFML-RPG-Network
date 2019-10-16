//
// Created by Admin on 14/10/19.
//

#ifndef TEXTMANAGER_H
#define TEXTMANAGER_H

#include <iostream>
#include "Player.h"

const std::string LINE_SEP = "________________\n";

class TextManager {
public:
    void DrawStats(Player& playerStat);

    std::string DrawStatus(Player& playerStat);

    std::string PromptChoice(Player& playerStat);

    std::string PrintState(Player& playerStat);

    void EndGame(Player& player1, Player& player2);

private:
};


#endif //TEXTMANAGER_H
