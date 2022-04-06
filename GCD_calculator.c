/*
A program that calculates and displays the greatest common divisor (GCD):

 */
#include <stdio.h>

int main(void)
{

    // declare the variable to accept an integer from the user
    int num1, num2;

    // declare the variable that stores the remainder and the gc
    int remainder, gcd;

    // accept an integer
    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);

    // the logic for finding GCD is dividing the compute the remainder when nm2 is divided by num1.
    // Copy num1 into num2 and copy the remainder into num1. Then repeat the process, until n reaches to 0

    while (num1 != 0)
    {
        remainder = num2 % num1;
        num2 = num1;
        num1 = remainder;
        gcd = num2;
    }

    printf("Greatest common divisor: %d\n", gcd);

    return 0;
}