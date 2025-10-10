#include <stdio.h>
#include <string.h>

int main() {

    char result[20] = {0};
    char str1[] = "Hello";
    char str2[] = "World";
    strcpy(result, str2);
    strcat(result, " ");
    strcat(result, str1);
    printf("Combined string: %s\n", result);
    printf("Length of the string: %d", strlen(result));

    return 0;
}