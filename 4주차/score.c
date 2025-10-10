#include <stdio.h>

int main() {

    float score;
    score = 93.5;
    int scoreDiv = (int) score/10;
    // 10, 9, 8, .....

    switch (scoreDiv) {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        default:
            printf("F\n");
            break;
    }
    


    return 0;
}