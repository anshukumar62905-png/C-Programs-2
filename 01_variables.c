#include <stdio.h>

    int main()
{
    int i = 10; // Declare and initialize 'i' with 10
    int j = i;
    int a = 2, b = 3, c = 4, d = 5;
    // %d is called format specifier
    // %d is for int, %f is for float and %c id for char
    printf("The value of i is %d and value of j is %d", i, j );
    printf("The value of a is %d and value of j is %d", a, j );
    printf("The value of c is %d and value of j is %d", c, d );
    return  0;
}