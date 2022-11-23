#include <iostream>

using namespace std;

// Абстрактен клас
class vehicle
{

protected:
    virtual ~vehicle() = 0;

public:
    // "= 0" прави функцията напълно виртуална, при което компилатора 
    // не изисква имплементация при декларирането й
    virtual void show() const = 0;
    virtual void drive() = 0;
};

vehicle::~vehicle()
{
    cout << "Pure virtual vehicle desctructor" << endl;
}

// car също е абстрактен клас, защото не са имплементирани абсолютно всички напълно виртуални функции (drive)
class car : public vehicle
{
public:
    ~car() override
    {
        cout << "Car desctructor" << endl;
    }

public:
    void show() const override
    {
        cout << "print car" << endl;
    }
};

class sport_car : public car
{
public:
    void drive() override
    {
        cout << "drive sport_car" << endl;
    }
};

int main()
{
    sport_car c;
    c.show();
    c.drive();

    return 0;
}