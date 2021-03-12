#include <stdlib.h>
#include <stdio.h>
#include "vector.h"

int main() {
    
    vector v;

    create(&v);
    printVector(v);
    add(&v, 6);
    add(&v, 7);
    add(&v, 9);
    printVector(v);

    for(int i = 0; i < v.size; i++) {
        printf("Element at index %i: %i\n", i, elementAt(v, i));
    }
}