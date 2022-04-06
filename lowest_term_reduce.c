/*
A program that asks the user to enter a fraction, then reduces the fraction to the lowest terms:
 */
#include <stdio.h>

int main(void)
{
    // declare the variable to accept the integer from the user

    int num1, num2, remainder, gcd;

    int numerator, denominator;

    printf("Enter a fraction in (a/b) form: ");
    scanf("%d/%d", &numerator, &denominator);

    num1 = numerator;
    num2 = denominator;

    //  To reduce a fraction to lowest terms, first compute the GCD of *the numerator and denominator.

    while (num1 != 0)
    {
        remainder = num2 % num1;
        num2 = num1;
        num1 = remainder;
        gcd = num2;
    }

    // divide both the numerator and *denominator by the GCD and display the result

    printf("In lowest terms: %d/%d\n", numerator / gcd, denominator / gcd);

    return 0;
}