//
// Created by nelly on 24.11.22.
//

#include "Cat.h"

Cat::Cat(char *name, gender catGender) {
    this->name = name;
    this->catGender = catGender;
}

char *Cat::getName() const {
    return name;
}

char* Cat::getCatGender() const {
    switch (catGender) {
        case FEMALE: return "female";
        case MALE: return "male";
    }
}

Cat::~Cat() {
    cout << "Destructing object Cat" << endl;
}

void Cat::print() const {
    cout << "Cat with name " << getName() << " is " << getCatGender() << endl;
}
