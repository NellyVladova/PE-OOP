#include <iostream>
#include "PurebreadCat.h"

int main() {
    //Additional task 1
    PurebreadCat* cat = new PurebreadCat("Fluffy", FEMALE, BIRMAN);

    cat->print();
    return 0;
}
