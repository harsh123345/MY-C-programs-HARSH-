#include <stdio.h>
void main()
{
   int i,n,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe Even numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i);
     sum+=2*i;
   }
   printf("\nThe Sum of Even Natural Number upto %d terms : %d \n",n,sum);
}
