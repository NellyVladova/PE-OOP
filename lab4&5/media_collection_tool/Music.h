//
// Created by nelly on 23.11.22.
//

#include "Item.h"
#pragma once

class Music : public Item {
private:
    const char* bandOrArtist;

public:
    Music(const char *contentType, const char *datePurchased, int itemId, const char *format, int numberOfItems,
          double price, const char *title, const char *bandOrArtist);

    const char *getBandOrArtist() const;

    ~Music() override;

    static void playOnCD();
};