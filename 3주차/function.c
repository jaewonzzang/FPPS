#include <stdio.h>

void toDecimal(int n, double num);

int main() {

    toDecimal(2, 3.141592);

    return 0;
}



void toDecimal(int n, double num) {
    printf("%.*f", n, num);
}