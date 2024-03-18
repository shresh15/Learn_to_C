// Update the function given in the IDE to output the following to the IDE by printing from inside the function.

// �
// 2
// +
// 2
// ∗
// �
// ∗
// �
// +
// �
// 2
// A 
// 2
//  +2∗A∗B+B 
// 2
 
// �
// +
// �
// A+B
#include <stdio.h>

void compute_value(int a, int b) {
    // update your code below this line
    int c=0;
    c=a*a+ 2*a*b+b*b;
    printf("%d\n",c) ;
    printf("%d\n",a+b) ;
}

int main() {
    int t = 3;

    for (int i = 0; i < t; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        compute_value(A, B);
    }
}