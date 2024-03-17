// The modulo operator, %, returns the remainder of a division. For example, 4 % 3 = 1 and 12 % 10 = 2. The ordinary division operator, /, returns a truncated integer value when performed on integers. For example, 5 / 3 = 1. To get the last digit of a number in base 10, use  as the modulo divisor.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int s=0;
    //Complete the code to calculate the sum of the five digits on n.
    while(n>0){
        int dis=n%10;
        s=s+dis;
        n=n/10;
         
    }
    printf("%d",s);
    return 0;
}
