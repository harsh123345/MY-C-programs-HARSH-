#include <stdio.h>  
   int main() 
   {  
    int angle1, angle2, angle3;  
    printf("Enter Three Angles of a Triangle\n");  
    scanf("%d %d %d", &angle1, &angle2, &angle3);     
    if( angle1 + angle2 + angle3 == 180) {  
        printf("It is a Valid Triangle\n");  
    } else {  
        printf("It is an invalid Triangle");  
    }  
     return 0;  
}