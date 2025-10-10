#include <stdio.h>

int main() {

    char ch = 0;
    printf("Enter a character : ");

    ch = getchar();

    printf("\nThe ASCII value of '%c' : %d\n", ch, ch);
    printf("The square : %d", ch*ch);



    return 0;
}