//
// Created by nelly on 28.10.22.
//

#include <iostream>
#include "rectangle.h"
using namespace std;

rectangle::rectangle() {

}

rectangle::rectangle(int width, int length) {
    rectangle::width = width;
    rectangle::length = length;
}

int rectangle::getWidth() const {
    return width;
}

void rectangle::setWidth(int width) {
    rectangle::width = width;
}

int rectangle::getLength() const {
    return length;
}

void rectangle::setLength(int length) {
    rectangle::length = length;
}

int rectangle::face(int width, int length) {
    return width * length;
}

int rectangle::face(int *p) {
    int result = (width + length) * 2;
    *p = result;
    return result;
}

rectangle::~rectangle() {
    cout << "Destructuring object rectangle" << endl;
}

int main(){
    rectangle r1 = *new rectangle();
    rectangle r2 = *new rectangle(3, 4);
    int p1, p2;

    r1.setLength(5);
    r1.setWidth(6);

    r1.face(&p1);
    r2.face(&p2);

    cout << "Area1: " << r1.face(r1.getWidth(), r1.getLength());
    cout << "\nPerimeter1: " << p1 << endl;
    cout << "Area2: " << r2.face(r2.getWidth(), r2.getLength());
    cout << "\nPerimeter2: " << p2 << endl;

    return 0;
}