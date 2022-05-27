#include <stdio.h>
int main()
{
    int  j, sum = 0;

    printf("The first 100 natural number is :\n");
 
    for (j = 1; j <= 100; j++)
    {
        sum = sum + j;
        printf("%d ",j);    
    }
    printf("\nThe Sum is : %d\n", sum);
}