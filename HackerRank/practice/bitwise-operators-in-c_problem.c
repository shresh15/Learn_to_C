// In this challenge, you will use logical bitwise operators. All data is stored in its binary representation. The logical operators, and C language, use  to represent true and  to represent false. The logical operators compare bits in two numbers and return true or false,  or , for each bit compared.

// Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.

// Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.

// Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by .
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int max_and = 0;
  int max_or = 0;
  int max_xor = 0;
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n; j++) {
        int a=j&i;
        int o=j|i;
        int x=j^i;
        if(a>max_and && a<k) {max_and = a;}
        if(o>max_or && o<k) {max_or = o;}
        if(x>max_xor && x<k) {max_xor = x;}
      }
  }
   printf("%d\n%d\n%d", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
   
    return 0;
}
