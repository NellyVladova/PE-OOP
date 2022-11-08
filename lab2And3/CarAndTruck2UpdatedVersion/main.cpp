//
// Created by nelly on 06.11.22.
//

#include <iostream>

using namespace std;

class truck;

//Предварителна декларация
class car {
    int passengers;
    int speed;
public:
    car(int p, int s) {
        passengers = p;
        speed = s;
    }

    friend int sp_greater(car c, truck t);

    friend double calculateTime(car car, int path);
};

class truck {
    int weight;
    int speed;
public:
    truck(int w, int s) {
        weight = w;
        speed = s;
    }

    friend int sp_greater(car c, truck t);

    friend double calculateTime(car car, int path);
};

int sp_greater(car c, truck t) {
    return c.speed - t.speed;
}

double calculateTime(car car, int path) {
    return (path / car.speed);
}

int main() {
    int t;
    car c1(6, 55), c2(2, 120);
    truck t1(10000, 55), t2(20000, 72);
    cout << "Comparing c1 and t1:\n";
    t = sp_greater(c1, t1);

    if (t < 0) {
        cout << "Truck is faster.\n";
    } else if (t == 0) {
        cout << "Car and truck speed is the same.\n";
    } else {
        cout << "Car is faster.\n";
    }
    cout << "\nComparing c2 and t2:\n";
    t = sp_greater(c2, t2);
    if (t < 0) {
        cout << "Truck is faster.\n";
    } else if (t == 0) {
        cout << "Car and truck speed is the same.\n";
    } else {
        cout << "Car is faster.\n";
    }
    double time = calculateTime(c1, 3000);
    cout << "\nTime: " << time << "h" << endl;

    return 0;
}


