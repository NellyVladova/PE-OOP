//
// Created by nelly on 23.11.22.
//

#include "Item.h"


Item::Item(const char *contentType, const char* datePurchased, int itemId, const char* format, int numberOfItems, double price,
           const char *title) {
    this->contentType = contentType;
    this->datePurchased = datePurchased;
    this->itemId = itemId;
    this->format = format;
    this->numberOfItems = numberOfItems;
    this->price = price;
    this->title = title;
}

const char *Item::getContentType() const {
    return contentType;
}

const char *Item::getDatePurchased() const {
    return datePurchased;
}

int Item::getItemId() const {
    return itemId;
}

const char *Item::getFormat() const {
    return format;
}

int Item::getNumberOfItems() const {
    return numberOfItems;
}

double Item::getPrice() const {
    return price;
}

const char *Item::getTitle() const {
    return title;
}

void Item::setItemId(int itemId) {
    Item::itemId = itemId;
}

void Item::toString() {
    cout << this->getFormat()
         << " with title \"" << this->getTitle()
         << "\" has been bought with price: " << this->getPrice()
         << "lv. on date " << this->getDatePurchased() << endl;
}

Item::~Item() {
    cout << "Destructing object item" << endl;
}
