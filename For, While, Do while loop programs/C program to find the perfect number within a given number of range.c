
#include <stdio.h>

void  main()
{
  int n,i,sum;
  int mn,mx;
  printf("Input the starting  number : ");
  scanf("%d",&mn);
  printf("Input the ending  number : ");
  scanf("%d",&mx);
  printf("The Perfect numbers within the given range : ");
  for(n=mn;n<=mx;n++){
    i=1;
    sum = 0;
    while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
    }
    if(sum==n)
      printf("%d ",n);
  }
      printf("\n");
}
