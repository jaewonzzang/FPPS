#include <stdio.h>

void isOdd(int);
int maxOfThree(int, int, int);

int main() {

    isOdd(3);
    printf("%d\n", maxOfThree(3,2,1));

    return 0;
}

void isOdd(int num) {
   
    int result;
    result = (num%2) ? 1:0;
    printf("%d\n", result);
}

int maxOfThree(int a, int b, int c) {

    int largest;
    largest = (a>b) ? a:b;
    largest = (largest>c) ? largest:c;
    return largest;
}