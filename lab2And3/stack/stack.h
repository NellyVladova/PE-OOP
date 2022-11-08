//
// Created by nelly on 06.11.22.
//

#include <iostream>

using namespace std;
#define SIZE 26

class stack {
private:
    int *arr;
    int top;
    int capacity;
public:
    stack(int size = SIZE);

    ~stack();

    void push(char c);

    char pop();

    char peek();

    int size();

    bool isEmpty();

    static stack loadStack();

    static stack loadStack(int upper);
};
