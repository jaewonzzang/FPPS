#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void signCheck(int);
void circum(float);

int main() {
    int n;
    scanf("%d", &n);
    signCheck(n);
    float r;
    printf("\nEnter the radius: ");
    scanf("%f", &r);
    circum(r);

    return 0;
}

void signCheck(int n) {
    if (n>0) printf("positive");
    else if (n==0) printf("zero");
    else printf("negative");
}

void circum(float r) {
    printf("The circumference is: %.2f", 2*r*M_PI);
}



