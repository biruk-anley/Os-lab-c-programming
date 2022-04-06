#include <stdio.h>

int main(void)
{
    // declare  varaibales to accept an integer from the user
    int num1, num2, num3, num4;
    int large_1, smaller, larger, smaller2;

    // declare variables to display the largest
    int largest, smallest;

    printf("\nEnter four integers you want : ");
    // accept 4 integers from the user
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // comparision between 4 integer using if statement
    if (num1 < num2)
    {
        smaller = num1;
        large_1 = num2;
    }
    else
    {
        smaller = num2;
        large_1 = num1;
    }

    if (num3 < num4)
    {
        smaller2 = num3;
        larger = num4;
    }
    else
    {
        smaller2 = num4;
        larger = num3;
    }

    if (large_1 < larger)
        largest = larger;
    else
        largest = large_1;

    if (smaller < smaller2)
        smallest = smaller;
    else
        smallest = smaller2;

    // diplay the result for the user:
    printf("The Largest is: %d\n", largest);
    printf("The Smallest is : %d\n\n", smallest);

    return 0;
}
