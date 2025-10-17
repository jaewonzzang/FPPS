#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int col = 10, row = 20;
    for (int i=0;i<col;i++) {
        for (int j=0;j<row;j++) {
            if ((int)rand()%2) printf("\\");
            else printf("/");
        }
        printf("\n");
    }
    return 0;
}