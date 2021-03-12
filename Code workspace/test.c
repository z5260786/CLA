#include <stdio.h>
int main(void){
int a = 5; // this is an int
int *b; // this is a pointer to an int
b = &a; // b is set to the address of a
a = 15; //change a to 15
// we dereference the pointer by using * and this prints the value of aprintf("\n b is now %d \n", *b);
printf("a's address is %p, b's is %p \n \n ", &a, b);
}