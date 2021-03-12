#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char greeting[999];
    char let[1];

    printf("Enter a string:\n");
    scanf("%s", greeting);

    printf("Enter a letter to count:\n");
    scanf("%s", let);



    printf("The letter %c appears %i time(s)", let[0], countLetter(greeting, let));

    return(0);
}

int countLetter(char s[], char l[]) {
    int count = 0;
    char *c;

    for(c = s; *c != '\0'; c++) {
        if(*c == l) {
            count++;
        }
    }

    return count;
}