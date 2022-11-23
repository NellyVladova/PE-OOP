//
// Created by nelly on 23.11.22.
//

#include "Movie.h"

Movie::Movie(const char *contentType, const char* datePurchased, int itemId, const char* format, int numberOfItems, double price,
             const char *title, int rating) : Item(contentType, datePurchased, itemId, format, numberOfItems, price, title) {
    this->rating = rating;
}

int Movie::getRating() const {
    return rating;
}

Movie::~Movie() {
    cout << "Destructing object Movie" << endl;
}

void Movie::playOnDVD() {
    cout << "Play on DVD" << endl;
}

void Movie::playOnVideo() {
    cout << "Play on video" << endl;
}
