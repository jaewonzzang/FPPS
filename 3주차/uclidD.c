#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

double dist(float x1, float x2, float y1, float y2);

int main() {
    double distance = dist(0,30,0,20);

    printf("%lf", distance);
    return 0;
}


double dist(float x1, float x2, float y1, float y2) {
    double result = (double) sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0));

    return result;
}


