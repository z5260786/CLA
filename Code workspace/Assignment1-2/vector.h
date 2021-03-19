//Ethan Fraser (z5269786)
//ZEIT3113 - CLA Assignment 1
//0.5 hours
//Contains the data type and subprogram signatures for vectors

struct vector {
    int size;
    int capacity;
    int *list;
};

typedef struct vector vector;

void create(vector *v);
void printVector(vector v);
void add(vector *v, int i);
int elementAt(vector v, int index);
void remove(vector *v, int n);
void trimToSize(vector *v);