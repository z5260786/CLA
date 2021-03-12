#include <stdio.h>
#include <stdlib.h>



int main(void) {
    char greeting[999];
    
    int u = 0, l = 0;

    printf("Enter a string:\n");
    scanf("%s", greeting);

    changeCase(greeting, 0, &u, &l);

    return(0);
}

void changeCase(char s[], int i, int *a, int *b) {
    char *c;

    if(i == 1) {
        for(c = s; *c != '\0'; c++) {
            if(isupper(*c)) {
                (*b)++;
            } else if(islower(*c)) {
                *c -= toupper(*c);
                (*a)++;
            }
        }
    } else if (i == 0) {
        for(c = s; *c != '\0'; c++) {
            if(isupper(*c)) {
                *c = tolower(*c);
                (*a)++;
            } else if(islower(*c)) {
                (*b)++;
            }
        }
    }

    printf("This string changed %i letter(s) and did not change %i letter(s)\n", *a, *b);
    printf("Your new string is: %s", s);
}