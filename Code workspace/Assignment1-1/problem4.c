#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char greeting[999];
    
    int u = 0, l = 0;

    printf("Enter a string:\n");
    scanf("%s", greeting);

    countCase(greeting, &u, &l);

    return(0);
}

void countCase(char s[], int *a, int *b) {
    char *c;

    for(c = s; *c != '\0'; c++) {
        if(isupper(*c)) {
            (*a)++;
        } else if(islower(*c)) {
            (*b)++;
        }
    }

    printf("This string contains %i upper case letter(s) and %i lower case letter(s)", *a, *b);
}