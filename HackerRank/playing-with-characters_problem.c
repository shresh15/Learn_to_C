// This challenge will help you to learn how to take a character, a string and a sentence as input in C.

// To take a single character  as input, you can use scanf("%c", &ch ); and printf("%c", ch) writes a character specified by the argument char to stdout
// You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{ 
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c", &ch );
    printf("%c\n",ch);
    scanf("%s\n", s );
    printf("%s\n",s);
    scanf("%[^\n]%*c", sen );
    printf("%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}