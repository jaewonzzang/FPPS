#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print10T(int, int);
void print20T(float, float);

int main() {
    srand(time(NULL));
    print10T(200, 255);
    print20T(5, 11);
    return 0;
}

void print10T(int n1, int n2) {
    if (n1>n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for(int i=0;i<10;i++) {
        printf("%d\n", (int)(rand()%(n2-n1+1)+n1));
    }
 }

void print20T(float n1, float n2) {
    if (n1>n2) {
        float temp = n1;
        n1 = n2;
        n2 = temp;
    }
    for (int i=0;i<20;i++) {
        printf("%.2f\n", (float)rand()/RAND_MAX * (n2-n1)+n1);
    }
 }