#include <stdio.h>
int main()
{
    int k = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            // printf("%d ", k);
            // k++;
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}