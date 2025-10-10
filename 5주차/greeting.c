#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void greeting(char name[]);

int main() {

    char str[100] = {0};
    printf("Enter your name: ");
    scanf("%99s", str);
    greeting(str);

    return 0;
}


void greeting(char name[]) {

    printf("Hello, %s!\n", name);
}