//
// Created by nelly on 07.11.22.
//

#include <iostream>
#include "myVector.h"

using namespace std;


myVector::myVector() {
    arr = new int[1];
    capacity = 1;
    currentElementsCount = 0;
}

myVector::myVector(int size) {
    arr = new int[size];
}

myVector::myVector(myVector &vector) {

}

myVector::~myVector() {
    cout << "\nDestructing object myVector" << endl;
    delete[] arr;
}

void myVector::pushBack(int element) {
    //add new element at the end of the array
    if (currentElementsCount == capacity) {
        int *temp = new int[2 * capacity];

        for (int i = 0; i < capacity; ++i) {
            temp[i] = arr[i];
        }

        delete[] arr;
        capacity *= 2;
        arr = temp;
    }
    arr[currentElementsCount] = element;
    currentElementsCount++;
}

void myVector::removeAt(int index) {
    //remove element from current index
    if (index == capacity) {
        capacity--;
        //value = 0 ?? incorrect
    } else if (index < capacity) {
        capacity--;
        for (int i = index; i < capacity; ++i) {
            arr[i] = arr[i + 1];
        }
    } else {
        cout << "Invalid index!" << endl;
    }
}

int myVector::getAt(int index) {
    //get element at current index
    if (index < currentElementsCount) {
        return arr[index];
    }
    return -1;
}

void myVector::setAt(int index, int value) {
    //set element at current index
    if (index == capacity) {
        pushBack(value);
    } else {
        arr[index] = value;
    }
}

int main() {
    myVector v1;
    v1.pushBack(1);
    v1.pushBack(3);
    v1.pushBack(5);
    v1.pushBack(7);
    v1.pushBack(9);
    v1.pushBack(11);
    v1.pushBack(13);
    v1.pushBack(15);
    v1.pushBack(17);
    v1.pushBack(19);

    cout << "Element at index 3 is: " << v1.getAt(3) << endl;
    cout << "Element at index 5 before setting new value is: " << v1.getAt(5) << endl;
    v1.setAt(5, 100);
    cout << "Element at index 5 after setting the new value is: " << v1.getAt(5) << endl;

    cout << "\nElement at index 2 before deletion is: " << v1.getAt(2) << endl;
    v1.removeAt(2);
    cout << "Element at index 2 after deletion is: " << v1.getAt(2) << endl;

    cout << "\nElement at index 8 before deletion is: " << v1.getAt(8) << endl;
    v1.removeAt(8);
    cout << "Element at index 8 after deletion is: " << v1.getAt(8) << endl;

    v1.removeAt(20);

    return 0;
}


