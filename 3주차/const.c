#define _USE_MATH_DEFINES
#include <math.h>

#include <stdio.h>

int main() {
    
    double area10 = 10*10*M_PI;
    double area6 = 6*6*M_PI;


    printf("Nyerb2 : %lf",area10-area6);
    return 0;
}