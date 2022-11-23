#include <iostream>

using namespace std;

class vehicle
{
public:
    int num_wheels;
    int range;

public:
    vehicle(int w, int r)
    {
        num_wheels = w;
        range = r;
    }
    
    void showv() const
    {
        cout << "Wheels:" << num_wheels << endl;
        cout << "Range:" << range << endl;
    }
    
    virtual void drive()
    {
        cout << "drive vehicle" << endl;
    }
};

enum motor
{
    gas,
    electric,
    diesel
};

// Налага се да използваме virtual, за да нямаме копиране на 
// компонентите от vehicle при наследяване на motorized
class motorized : virtual public vehicle
{
    enum motor mtr;

public:
    motorized(enum motor m, int w, int r) : vehicle(w, r)
    {
        mtr = m;
    }

    void showm() const
    {
        cout << "Motor:";
        switch (mtr)
        {
        case gas:
            cout << "Gas\n";
            break;
        case electric:
            cout << "Electric\n";
            break;
        case diesel:
            cout << "Diesel\n";
            break;
        }
    }

    void drive() override
    {
        cout << "drive motorized" << endl;
    }
};

// Налага се да използваме virtual, за да нямаме копиране на 
// компонентите от vehicle при наследяване на road_use
class road_use : virtual public vehicle
{
    int passengers;

public:
    road_use(int p, int w, int r) : vehicle(w, r)
    {
        passengers = p;
    }

    void showr() const
    {
        cout << "Passengers:" << passengers << endl;
    }

    void drive() override
    {
        cout << "drive on road" << endl;
    }
};

enum steering
{
    power,
    rack_pinion,
    manual
};

class car : public motorized, public road_use
{
    enum steering strng;

public:
// Когато наследяваме множество класове, които имат общ базов клас
// трябва изришно да извикаме конструктора на общия базов клас
// тъй като компилатора не разрешава множество извиквания на един и същ конструктор
// В случая vehicle е общия базов клас и трябва да бъде извикан
    car(enum steering s, enum motor m, int p, int w, int r) : motorized(m, w, r), road_use(p, w, r), vehicle(w, r)
    {
        strng = s;
    }

    void show() const
    {
        showv();
        showr();
        showm();
        cout << "Steering: ";
        switch (strng)
        {
        case power:
            cout << "Power\n";
            break;
        case rack_pinion:
            cout << "Rack and pinion\n";
            break;
        case manual:
            cout << "Manual\n";
            break;
        }
    }

    void drive() override
    {
        // Чрез оператора за принадлежност можем да достъпим функция от специфичен базов клас
        //motorized::drive();

        cout << "drive motorized car on road" << endl;
    }
};

class other_class
{
public:
    int num_wheels;
};

int main()
{
    car c(power, gas, 5, 4, 500);
    c.show();
    c.drive();

// Най добре е да cast-ваме чрез dynamic_cast, защото runtime 
// проверява принадлежността към желания тип базов клас
    other_class* o = (other_class*)&c;
    //other_class* o = dynamic_cast<other_class*>(&c);
    if (o == NULL)
        cout << "NULL pointer";
    else
        cout << "pointer value " << o << " wheels value " << o->num_wheels;

    return 0;
}