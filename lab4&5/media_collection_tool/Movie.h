//
// Created by nelly on 23.11.22.
//

#include "Item.h"
#pragma once

class Movie : public Item{
private:
    int rating;
public:
    Movie(const char *contentType, const char* datePurchased, int itemId, const char* format, int numberOfItems, double price,
          const char *title, int rating);

    int getRating() const;

    ~Movie() override;
    static void playOnDVD();
    static void playOnVideo();
};
