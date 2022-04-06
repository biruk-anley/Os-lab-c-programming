/*

 The  program that finds the largest in a series of numbers entered by the user.

  numbers aren't necessarily integers.
 */
#include <stdio.h>

int main(void)
{

    // declare the variable to accept a float from the user
    float num1, maximum;

    printf("Enter numbers and see the largest (enter 0 to stop)\n");

    printf("Enter a number: ");

    // accept a number
    scanf("%f", &num1);
    maximum = num1;

    // use while loop so that a user can enter a number iteratively and acording to the problem use 0 as a limit to stop the user's input
    // if user input a number <0 it will stop its execution and will return the maximum
    while (num1 > 0)
    {

        // making the use to enter a number reptidly
        printf("Enter a number: ");
        scanf("%f", &num1);

        // comparision using if statement
        if (num1 > maximum)
        {
            maximum = num1;
        }
    }

    printf("\nThe largest number entered was %.2f\n", maximum);

    return 0;
}