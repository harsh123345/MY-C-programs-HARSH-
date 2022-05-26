#include <stdio.h>
void main()
{
    int h,H ;
 
    printf("Enter the values for h and H\n");
    scanf("%d %d", &h, &H);
    if (h == H)
        printf("h and H are equal\n");
    else
        printf("h and H are not equal\n");
}