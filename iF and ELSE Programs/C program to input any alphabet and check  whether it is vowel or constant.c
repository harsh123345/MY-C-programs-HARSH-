#include <stdio.h>
int main()
{
    char ch;
    int small_Vowel, capital_Vowel;
  printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);
  small_Vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    capital_Vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (small_Vowel || capital_Vowel)
    {
    	printf("\n %c is a VOWEL.", ch);
	}
    else {
    	printf("\n %c is a CONSONANT.", ch);
	}
    return 0;
}