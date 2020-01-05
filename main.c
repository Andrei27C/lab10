#include <stdio.h>
#include "problems.h"


int main() {
    printf("Choose which problem to solve:\n");
    printf("1. Problem 3.2\n");
    printf("2. Problem 3.13\n");
    printf("3. Problem 3.14\n");
    int problem, ok = 1;
    scanf("%d", &problem);
    while(ok == 1) {
        switch (problem) {
            case 1: {
                printf("Give an X and an N\n");
                int x, n;
                scanf("%d %d", &x, &n);
                printf("%d", P2(x,n));
                ok = 0;
                break;
            }
            case 2: {
                Problem13();
                ok = 0;
                break;
            }
            case 3: {
                Problem14();
                ok = 0;
                break;
            }
            default: {
                printf("Please choose a number between 1 and 3\n");
                scanf("%d", &problem);
                break;
            }
        }
    }
    return 0;
}