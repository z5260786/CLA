

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