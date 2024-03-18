// An array is present in the code, change the last element of this array to be 6. Also, print this last element after changing.
#include <stdio.h>

int main() {

    int even_numbers[4] = {0, 2, 4, 5};
    
    even_numbers[3]=6;
    printf("%d", even_numbers[3]);

}
