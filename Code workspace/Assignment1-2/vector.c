#include "vector.h"
#include <stdlib.h>

void create(vector *v) {
    v->size = 0;
    v->capacity = 2;
    v->list = (int*)malloc(2*sizeof(int));
}

void printVector(vector v) {
    printf("Vector size: %i\nVector capacity: %i\n", v.size, v.capacity);

    printf("Vector list: ");
    if (v.size > 0) {
        for(int i = 0; i < v.size; i++) {
            printf("[%i]", v.list[i]);
        }
    } else {
        printf("[Empty]");
    }
    printf("\n");
    
}

void add(vector *v, int i) {
    
    if(v->size >= v->capacity) {
        int *tmp = malloc(sizeof(v->list) * 2);
        for(int n = 0; n < v->size; n++) {
            tmp[n] = v->list[n];
        }

        free(v->list);
        v->list = tmp;
        v->capacity *= 2;
    }
    
    v->list[v->size] = i;
    v->size++;
}

int elementAt(vector v, int index) {
    
    if(index < v.size) {
        return v.list[index];
    } else {
        printf("Invalid index. Choose a number from 0 - %i.", v.size--);
    }
}

void remove(vector *v, int n) {
    
    int *tmp = malloc(sizeof(v->list));
    int nSize = 0;

    for(int i = 0; i < v->size; i++){
        
        if(v->list[i] != n) {
            tmp[nSize] = v->list[i];
            nSize++;
        }

    }

    free(v->list);
    v->size = nSize;
    v->list = tmp;

}