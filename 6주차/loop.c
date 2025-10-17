#include <stdio.h>

void printAll(int);
void printSum(int);
void printEven(int);

int main() {
    // 주석처리해서 사용
    printAll(100);
    printSum(100);
    printEven(100);

    return 0;
}

void printAll(int n) {
    int i = 0;
    while(n!=i) {
        printf("%d\n", ++i);
    }
}

void printSum(int n) {
    int sum = 0, i = 0;
    while(n!=i) {
        ++i;
        sum += i;
    }
    printf("%d\n", sum);
}

void printEven(int n) {
    int i=0;
    while(n!=i) {
        i+=2;
        printf("%d\n", i);
    } 
}