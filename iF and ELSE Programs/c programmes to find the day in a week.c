#include <stdio.h>
int main ()
{
    int day;
    printf (" enter the number 1 to 7 ");
    scanf("%d",&day);
    switch (day)
  
{
     case 1 :
    printf("sunday");
    break;


    case 2 :
    printf("monday");
     break;



     case 3 :
    printf("tuesday");
     break;



     case 4:
    printf ("wednesday");
     break;



      case 5 :
    printf("thursday");
     break;



       case 6 :
    printf("friday");
     break;


      case 7 : 
    printf("saturday");
     break;


default:
printf("you have enter the wrong number");

}
return 0;
}