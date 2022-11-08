//
// Created by nelly on 06.11.22.
//
#include <iostream>
#include "stack.h"

using namespace std;

stack::stack(int size) {
    arr = new int[size];
    capacity = size;
    top = -1;
}

stack::~stack() {
    cout << "\nDestructing object Stack";
}

void stack::push(char c) {
    if (size() == capacity) {
        cout << "Stack overflow";
    } else {
        arr[++top] = c;
    }
}

char stack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty!";
        return -1;
    }
    return arr[top--];
}

char stack::peek() {
    if (!isEmpty()) {
        return arr[top];
    }
    return -1;
}

int stack::size() {
    return top + 1;
}

bool stack::isEmpty() {
    return top == -1;
}

stack stack::loadStack() {
    stack s;

    for (int i = 0; i < 26; i++) {
        char symbol = 122 - i;
        s.push(symbol);
    }
    return s;
}

stack stack::loadStack(int upper) {
    stack s;
    if (upper == 1) {
        for (int i = 0; i < 26; i++) {
            char symbol = 90 - i;
            s.push(symbol);
        }
        return s;
    }
    return s.loadStack();
}

int main() {
    int upper;
    cout << "'1' -> Upper case\nAnother number -> Lower case\n";
    cin >> upper;

    stack result = stack::loadStack(upper);
    cout << "\nSize of the stack: " << result.size();
    cout << "\nIs stack empty: " << result.isEmpty();
    cout << "\nThe top element of the stack: " << result.peek();
    result.pop();
    result.pop();
    cout << "\nAfter popping some elements the top element of the stack is: " << result.peek();

    cout << "\nAll elements: " << endl;
    while (result.size() != 0) {
        cout << result.pop() << " ";
    }

    return 0;
};
