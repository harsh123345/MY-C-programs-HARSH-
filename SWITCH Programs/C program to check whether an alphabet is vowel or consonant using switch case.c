#include <stdio.h>
int main ()
{
    char ch ;
    printf("enter any character");
    scanf("%c",&ch);
    switch(ch)
  
{
     case 'A':
     case 'a' :
    printf("It is a vowel  ");
    break;


    case 'E':
    case'e':
    printf("It is a vowel");
     break;



     case'I' :
     case 'i' :
    printf("It is a vowel ");
     break;



     case'O':
     case'o':
    printf ("It is a vowel");
     break;



      case'U' :
      case'u':
    printf("It is a vowel");
     break;

default:
printf("NOT A VOWEL");
}
return 0;
}