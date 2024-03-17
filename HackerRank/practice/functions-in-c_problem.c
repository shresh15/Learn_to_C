// In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements grouped together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.
#include <stdio.h>


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d) 
{
    int q=0;
    q=max(a,b);
    int p=0;
    p=max(c,d);
    return(max(p,q));
}
int max(int x,int y)
{
    if (x>y) return x;
    else return y;
}