//
// Created by nelly on 24.11.22.
//

#include "PurebreadCat.h"

PurebreadCat::PurebreadCat(char *name, gender catGender, catBreeds breed) : Cat(name, catGender), breed(breed) {
    this->breed = breed;
}

char* PurebreadCat::getBreed() const {
    switch (breed) {
        case BIRMAN: return "Birman";
        case BENGAL: return "Bengal";
        case BOMBAY: return "Bombay";
    }
}

PurebreadCat::~PurebreadCat() {
    cout << "Destructing object pureBreadCat" << endl;
}

void PurebreadCat::print() const {
    cout << "Cat with name " << getName() << " is " << getBreed() << " breed and " << getCatGender() << endl;
}
