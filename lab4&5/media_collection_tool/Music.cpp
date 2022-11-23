//
// Created by nelly on 23.11.22.
//

#include "Music.h"

Music::Music(const char *contentType, const char* datePurchased, int itemId, const char* format, int numberOfItems, double price,
             const char *title, const char *bandOrArtist) : Item(contentType, datePurchased, itemId, format, numberOfItems, price,
                                                     title) {
    this->bandOrArtist = bandOrArtist;
}

const char *Music::getBandOrArtist() const {
    return bandOrArtist;
}

Music::~Music() {
    cout << "Destructing object Music" << endl;
}

void Music::playOnCD() {
    cout << "Play on CD" << endl;
}
