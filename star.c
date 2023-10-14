#include <stdio.h>

int main() 
{
    int a, b, i, j;

    printf("ธ๎ มู? ");
    scanf_s("%d", &a);

    for (i = 1; i <= a; i++) 
    {   
        for (b = 1; b <= a-i; b++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) 
        {
            printf("*");
        } 
        printf("\n");
    }
    return 0;



}
