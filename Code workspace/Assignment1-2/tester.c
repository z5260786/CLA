//Ethan Fraser (z5269786)
//ZEIT3113 - CLA Assignment 1
//1 hour
//Contains the testing of functions from vector.c/vector.h

#include "vector.h"
#include <stdlib.h>

int main() {
    
    vector v;

    create(&v);
    printf("Size of list: %lu\n", sizeof(v.list));
    printVector(v);
    add(&v, 6);
    add(&v, 7);
    add(&v, 9);
    add(&v, 6);
    add(&v, 6);
    printVector(v);

    printf("Size of list: %lu\n", sizeof(v.list));
    for(int i = 0; i < v.size; i++) {
        printf("Element at index %i: %i\n", i, elementAt(v, i));
    }

    remove(&v, 6);
    
    printVector(v);

    trimToSize(&v);
    printf("Size of list: %lu\n", sizeof(v.list));
    printVector(v);
    printf("Size of list: %lu\n", sizeof(v.list));
}