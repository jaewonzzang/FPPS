#include <stdio.h>

float avg(int arr[], int len);

int main() {

    int number[3] = {3, 5, 8};
    int len = sizeof(number)/sizeof(number[0]);
    printf("%.3f", avg(number, len));
   
    return 0;
}

float avg(int arr[], int len) {

    int sum=0;
    for (int i=0;i<len;i++) {
        sum += arr[i];
    }
    return (float)sum/len;
}