#include <stdio.h>


int globalVar = 100;

void scope() {

    int localVar = 99;
    printf("local variable : %d\n\n", localVar);
    printf("global var in function : %d\n\n", globalVar);
}


int main() {

    scope();

    // printf("Error : %d", localVar);

    printf("global variable : %d", globalVar);

}