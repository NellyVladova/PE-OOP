#include <iostream>

using namespace std;

class vehicle
{
    int num_wheels;
    int range;

public:
    vehicle(int w, int r)
    {
        cout << "Vehicle constructor" << endl;
        num_wheels = w;
        range = r;
    }

    ~vehicle()
    {
        cout << "Vehicle denstructor" << endl;
    }

    void showv() const
    {
        cout << "Wheels:" << num_wheels << endl;
        cout << "Range:" << range << endl;
    }
};

class car : public vehicle
{
    int passengers;

public:
    car(int p, int w, int r) : vehicle(w, r)
    {
        cout << "Car constructor" << endl;
        passengers = p;
    }

    ~car()
    {
        cout << "Car denstructor" << endl;
    }

    void show() const
    {
        showv();
        cout << "Passengers:" << passengers << endl;
    }
};

class truck : public vehicle
{
    int loadlimit;

public:
    truck(int l, int w, int r) : vehicle(w, r) 
    {
        cout << "Truck constructor" << endl;
        loadlimit = l; 
    }

    ~truck()
    {
        cout << "Truck denstructor" << endl;
    }

    void show() const
    {
        showv();
        cout << "Loadlimit:" << loadlimit << endl;
    }
};

// Клас може да бъде наследен чрез различни нива на достъп
// public - всички компоненти на базовия клас се наследяват без промяна на достъпа
// protected - всички public компоненти на базовия клас се наследяват като protected, а останалите - без промяна на достъпа
// private - всички компоненти на базовия клас се наследяват като private
class super_car : public car
{
public:
    super_car() : car(2, 4, 250)
    {
        cout << "Super car constructor" << endl;
    }

    ~super_car()
    {
        cout << "Super car denstructor" << endl;
    }

    void showSuperCar() const
    {
        showv();
    }
};

int main()
{
    car c(5, 4, 500);
    truck t(30000, 12, 1200);
    cout << "Car:" << endl;
    c.show();
    cout << "\nTruck:" << endl;
    t.show();

    cout << endl << endl;
    super_car superCar;
    superCar.showv();
    superCar.show();
    superCar.showSuperCar();
    
    return 0;
}