// n this challenge, you will learn the usage of the for loop, which is a programming language statement which allows code to be executed until a terminal condition is met. They can even repeat forever if the terminal condition is never met.
// For each integer  in the interval  (given as input) :

// If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
// Else if  and it is an even number, then print "even".
// Else if  and it is an odd number, then print "odd".
// Input Format
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
     for(int i=a;i<=b;i++)
     {
        if(i==1)printf("one\n");
        else if(i==2)printf("two\n");
        else if(i==3)printf("three\n");
        else if(i==4)printf("four\n");
        else if(i==5)printf("five\n");
        else if(i==6)printf("six\n");
        else if(i==7)printf("seven\n");
        else if(i==8)printf("eight\n");
        else if(i==9)printf("nine\n");
        else{
            if(i%2==0)printf("even\n");
            else printf("odd\n");
         
        }
     }
     
        

    return 0;
}

