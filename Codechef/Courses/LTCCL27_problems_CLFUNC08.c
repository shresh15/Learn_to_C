//You are given a code in the IDE. Complete the aMinusBSquare function by calling the square function inside it.
#include <stdio.h>

// Function to calculate the square of a number
int square(int a) {
    return a * a;
}

// Function to calcuate (a - b) ^ 2
int aMinusBSquare(int a, int b) {
    // Update your code here
    int c=0;
    c=square(a)-2*a*b+square(b);
    return c;
    
}

int main() {
    int result = aMinusBSquare(2, 1);
    printf("Result: %d\n", result);
}
