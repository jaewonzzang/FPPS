#include <stdio.h>
#include <string.h>

void prirntOdd(int);
void printAtoZ();
void printStar(int, int);
void printStr(char[]);

int main() {
    // 주석처리하여 사용
    char *str = "Hello, world!";
    prirntOdd(100);
    printAtoZ();
    printStar(10, 5); // 가로 10개 세로 5개
    printStr(str);

    return 0;
}

void prirntOdd(int n) {
    for (int i=1;i<=n;i+=2) printf("%d\n", i);
} 

void printAtoZ() {
    for (int i=97;i<=122;i++) printf("%c", i);
}

void printStar(int row, int col) {
    for (int i=0;i<col;i++) {
        for (int j=0;j<row;j++) {
            printf("*"); 
        }
        printf("\n");
    }
}

void printStr(char *arr) {
    for (int i=0;i<strlen(arr);i++) printf("%c\n", *(arr+i));
}