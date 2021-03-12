#include "vector.h"
#include <stdlib.h>

int main() {
    
    vector v;

    create(&v);
    printVector(v);
    add(&v, 6);
    add(&v, 7);
    add(&v, 9);
    add(&v, 6);
    add(&v, 6);
    printVector(v);

    for(int i = 0; i < v.size; i++) {
        printf("Element at index %i: %i\n", i, elementAt(v, i));
    }

    remove(&v, 6);
    
    printVector(v);

    trimToSize(&v);

    printVector(v);
}