//
// Created by nelly on 24.11.22.
//

#include "Cat.h"

enum catBreeds {BIRMAN, BENGAL, BOMBAY};

class PurebreadCat : public Cat{
private:
    catBreeds breed;
public:
    PurebreadCat(char *name, gender catGender, catBreeds breed);

    ~PurebreadCat() override;

    char* getBreed() const;

    void print() const override;
};