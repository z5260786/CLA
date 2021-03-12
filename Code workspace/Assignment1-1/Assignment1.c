#include <stdio.h>
#include <stdlib.h>

//Main function - Handler
int main(void) {
    char greeting[999];
    int u = 0, l = 0;

    printf("Enter a string:\n");
    scanf("%s", greeting);

    //Problem 1
    firstChar(greeting);

    //Problem 2
    lengthCheck(greeting);

    //Problem 3
    countLetter(greeting);

    //Problem 4
    countCase(greeting, &u, &l);

    //Problem 5 - Uppercase
    changeCase(greeting, 1, &u, &l);

    //Problem 5 - Lowercase
    changeCase(greeting, 0, &u, &l);


    return(0);
}

//Problem 1 - print first character
void firstChar(char* s) {

    printf("First character of \'%s\' is %c\n", s, s[0]);
}

//Problem 2 - Print length of String entered
void lengthCheck(char* s) {
    int count = 0;
    char *c;

    for(c = s; *c != '\0'; c++) {
        count++;
    } 

    printf("Length of string is %i\n", count);

}

//Problem 3 - Count how many times letter 'm' occurs
int countLetter(char* s) {
    int count = 0;
    char *c;

    for(c = s; *c != '\0'; c++) {
        if(*c == 'm') {
            count++;
        }
    }

    printf("The letter \'m\' occurs %i time(s)\n", count);
}

//Problem 4 - Count how many upper case and lower case letters are in string
void countCase(char* s, int *a, int *b) {
    char *c;
    *a = 0, *b = 0;

    for(c = s; *c != '\0'; c++) {
        if(*c >= 65 && *c <= 90) {
            (*a)++;
        } else if(*c >= 97 && *c <= 122) {
            (*b)++;
        }
    }

    printf("This string contains %i upper case letter(s) and %i lower case letter(s)\n", *a, *b);
}

//Problem 5 - Change case to upper/lower and count the changes
void changeCase(char* s, int i, int *a, int *b) {
    char *c;
    *a = 0, *b = 0;

    if(i == 1) {
        printf("\nUPPERCASE:\n");
        for(c = s; *c != '\0'; c++) {
            if(*c >= 65 && *c <= 90) {
                (*b)++;
            } else if(*c >= 97 && *c <= 122) {
                *c -= 32;
                (*a)++;
            }
        }
    } else if (i == 0) {
        printf("\nLOWERCASE:\n");
        for(c = s; *c != '\0'; c++) {
            if(*c >= 65 && *c <= 90) {
                *c += 32;
                (*a)++;
            } else if(*c >= 97 && *c <= 122) {
                (*b)++;
            }
        }
    }

    printf("This string changed %i letter(s) and did not change %i letter(s)\n", *a, *b);
    printf("Your new string is: %s\n", s);
}