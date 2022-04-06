/*

This is A program that accept the date from the user and will tell which day is the earilier
*/
#include <stdio.h>

int main(void)
{

    // declare the variable to accept first input from the user
    int month_one, day_one, year_one;

    // declare the variable to accpet the second input from the user
    int month_two, day_two, year_two;

    printf("Enter first date (mm/dd/yy): ");
    // accept the fist date
    scanf("%d/%d/%d", &month_one, &day_one, &year_one);

    printf("Enter second date (mm/dd/yy): ");
    // accept the second date
    scanf("%d/%d/%d", &month_two, &day_two, &year_two);

    // comparision between those date
    // the comparision logic is first it will compare the year then it will go to the month then it will compare the date

    // if years are not equal
    if (year_one < year_two)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
               month_one, day_one, year_one, month_two, day_two, year_two);
    }
    else if (year_two < year_one)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
               month_two, day_two, year_two, month_one, day_one, year_one);
    }

    /*if  years are equal then compare the month */

    else if (month_one < month_two)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
               month_one, day_one, year_one, month_two, day_two, year_two);
    }
    else if (month_two < month_one)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
               month_two, day_two, year_two, month_one, day_one, year_one);
    }

    /*if  years and months are equal the compare the date */

    else if (day_one < day_two)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
               month_one, day_one, year_one, month_two, day_two, year_two);
    }
    else
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
               month_two, day_two, year_two, month_one, day_one, year_one);
    }

    return 0;
}
