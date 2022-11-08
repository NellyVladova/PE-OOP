//
// Created by nelly on 07.11.22.
//

class myVector{
    int* arr;
    int capacity, currentElementsCount;
public:
    myVector();
    myVector(int size);
    myVector(myVector &vector);
    ~myVector();
    void pushBack(int element);
    void removeAt(int index);
    int getAt(int index);
    void setAt(int index, int value);
};