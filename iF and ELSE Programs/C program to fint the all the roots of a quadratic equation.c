# include <stdio.h>
# include <math.h>
int main()
{
    int a,b,c,d;
    float r1,r2;
    printf("Enter the value of a,b,c");
scanf ("%d%d%d",&a,&b,&c);
d= b*b-4*a*c;
printf("%d",d);
if(d>0)
{
    printf("the roots are real");
    r1=(-b+sqrt(d))/2*a;
     r2=(-b-sqrt(d))/2*a;
     printf("r1=%f and r2=%f",r1,r2);
}
else if(d==0)
    {
        printf("Roots are equal");
        r1=-b/2*a;
        r2=-b/2*a;
        printf("r1=%f and r2=%f",r1,r2);
    }
else
{
  printf("Roots are imaginary"); 
} 
return 0;
}



