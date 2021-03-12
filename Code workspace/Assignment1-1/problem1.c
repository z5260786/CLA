#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char greeting[999];
    printf("Enter a string:\n");
    scanf("%s", greeting);

    return(0);
}

void firstChar(char s[]) {

    printf("First character is %c", s[0]);
}