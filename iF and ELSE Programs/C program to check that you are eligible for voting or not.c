#include<stdio.h>
int main()
{
    int n;
    printf("enter the age");
    scanf("%d",&n);
    if(n>=18)
    {
        printf("yes, you are elligible for vote");
    }
    else
    {
        printf("sorry,you are not ellegible for vote");
    }
    return 0;
}