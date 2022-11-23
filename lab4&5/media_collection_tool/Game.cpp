//
// Created by nelly on 23.11.22.
//

#include "Game.h"

Game::Game(const char *contentType, const char* datePurchased, int itemId, const char* format, int numberOfItems, double price,
           const char *title, int gameDifficult, const char* mfg) : Item(contentType, datePurchased, itemId, format, numberOfItems,
                                                              price,
                                                              title) {
    this->difficultyLevel = gameDifficult;
    this->mfg = mfg;
}

int Game::getDifficultyLevel() const {
    return difficultyLevel;
}

const char *Game::getMfg() const {
    return mfg;
}

Game::~Game() {
    cout << "Destructing object Game" << endl;
}

void Game::playOnCD() {
    cout << "Play on CD" << endl;
}

void Game::playOnVideo() {
    cout << "Play on Video" << endl;
}
