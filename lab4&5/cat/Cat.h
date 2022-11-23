//
// Created by nelly on 24.11.22.
//
#include <iostream>
using namespace std;

enum gender{ FEMALE, MALE};

class Cat {
private:
    char* name;
    //enumerated-type-name variable-name = value;
    gender catGender;
public:
    Cat(char *name, gender catGender);

    char *getName() const;

    char* getCatGender() const;

    virtual ~Cat();;

    virtual void print() const;
};