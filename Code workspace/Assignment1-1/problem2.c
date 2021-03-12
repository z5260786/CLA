#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char greeting[999];

    printf("Enter a string:\n");
    scanf("%s", greeting);

    return(0);
}

void lengthCheck(char s[]) {
    int count = 0;
    char *c;

    for(c = s; *c != '\0'; c++) {
        count++;
    } 

    printf("Length of string is %i", count);

}