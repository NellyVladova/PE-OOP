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

    int sp_greater(truck t);
    double calculateTime(truck truck, int path);
};

class truck {
    int weight;
    int speed;
public:
    truck(int w, int s) {
        weight = w;
        speed = s;
    }

    friend int car::sp_greater(truck t);
    friend double car::calculateTime(truck truck, int path);
};

int car::sp_greater(truck t) {
    return speed - t.speed;
// Тъй като sp_greater() е член на car, то трябва да се подаде само обектът за камион
}

double car::calculateTime(truck truck, int path){
    return (path / truck.speed);
}

int main() {
    int t;
    car c1(6, 55), c2(2, 120);
    truck t1(10000, 55), t2(20000, 72);

    cout << "Comparing c1 and t1:\n";
    t = c1.sp_greater(t1);
//Извиква се като член-функция на car

    if (t < 0) {
        cout << "Truck is faster.\n";
    } else if (t == 0) {
        cout << "Car and truck speed is the same.\n";
    } else {
        cout << "Car is faster.\n";
    }
    cout << "\nComparing c2 and t2:\n";
    t = c2.sp_greater(t2);
//Извиква се като член-функция на car
    if (t < 0) {
        cout << "Truck is faster.\n";
    } else if (t == 0) {
        cout << "Car and truck speed is the same.\n";
    } else {
        cout << "Car is faster.\n";
    }
    double time = c1.calculateTime(t1, 550);
    cout << "\nTime: " << time << "h" << endl;

    return 0;
}
