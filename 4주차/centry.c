#include <stdio.h>


int main() {

    int age;
    age = 23;

    if (age<=12) printf("Gen Alpha");
    else if (age<=28) printf("Gen Z");
    else if (age<=44) printf("Millennial");
    else printf("Another generation");

    return 0;
}