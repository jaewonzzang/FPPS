#include <stdio.h>

void greeting(char name[]);
void printLast(char str[]);


int main() {


    greeting("Jae won");
    printLast("Think step by step");

    return 0;
}

void greeting(char name[]) {

    printf("Hello, %s!\n", name);
}

void printLast(char str[]) {

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    
    printf("The last character: %c", str[len-1]);
    
}