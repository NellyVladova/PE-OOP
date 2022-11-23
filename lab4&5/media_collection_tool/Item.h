//
// Created by nelly on 23.11.22.
//

#include <ctime>
#include <iostream>
#pragma once

using namespace std;

class Item {
private:
    const char *contentType;
    const char *datePurchased;
    int itemId;
    const char* format;
    int numberOfItems;
    double price;
    const char *title;

public:
    Item(const char *contentType, const char* datePurchased, int itemId, const char* format, int numberOfItems, double price,
         const char *title);

    const char *getContentType() const;

    const char *getDatePurchased() const;

    int getItemId() const;

    const char *getFormat() const;

    int getNumberOfItems() const;

    double getPrice() const;

    const char *getTitle() const;

    void setItemId(int itemId);

    void toString();

    virtual ~Item();
};