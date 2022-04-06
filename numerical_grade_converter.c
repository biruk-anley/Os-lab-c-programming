/*

 Using the switch statement, write a program that converts a numerical
 grade into a letter grade:

 */
#include <stdio.h>

int main(void)
{

    // declare the variable to accept numerical grade
    int Grade;

    printf("Enter numerical Grade: ");

    // accept a Grade from the suer
    scanf("%d", &Grade);

    // check if user input a numerical grade which is greater than 100 or less than 0

    if (Grade > 100 || Grade < 0)
    {
        printf("Error: You enter Invalid Grade\n");
        return 1;
    }

    // switch statemetn to convert the numerical grade to a letter
    // first divide the grade to 10 so that it can handle the range between them
    // ex if user input : 55 it is impossibel to use 55 in switch but if we convert to one digit it could be easy to compare

    switch (Grade / 10)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Letter Grade: %s\n", "F");
        break;
    case 6:
        printf("Letter Grade: %s\n", "D");
        break;
    case 7:
        printf("Letter Grade: %s\n", "C");
        break;
    case 8:
        printf("Letter Grade: %s\n", "B");
        break;
    case 9:
        printf("Letter Grade: %s\n", "A");
        break;
    default:
        printf("Letter Grade: %s\n", "A");
        break;
    }

    return 0;
}
