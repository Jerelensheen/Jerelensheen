#include<stdio.h>

int main()
{
    int num;
    int odd1 = 3;
    int odd2 = 1;
    int even = 2;
    printf("input any positive integers: ");
    scanf("%d", &num);

    while(num > 1) {
        if(num % 2 == 0) {
            num = num / even;
            printf("\nCurrrent integer value is: %d", num);
        }
        else{
        num = num * odd1 + odd2;
        printf("\nCurrrent integer value is: %d", num);
        }
        }
        return 0;
    }
