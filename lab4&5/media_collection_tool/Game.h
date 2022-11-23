//
// Created by nelly on 23.11.22.
//

#include "Item.h"
#pragma once

class Game : public Item {
private:
    int difficultyLevel;
    const char *mfg;
public:
    Game(const char *contentType, const char *datePurchased, int itemId, const char *format, int numberOfItems, double price,
         const char *title, int difficultyLevel, const char *mfg);

    int getDifficultyLevel() const;

    const char *getMfg() const;

    ~Game() override;

    static void playOnCD();

    static void playOnVideo();
};
