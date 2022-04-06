/*


A program that asks the user for a two-digit number, then prints the English word for the number:


 */
#include <stdio.h>

int main(void)
{

    // declare the varibale to accept an integer from the user
    int num;

    printf("Enter a two-digit number: ");

    // accept an integer
    scanf("%d", &num);

    printf("You entered the number ");

    // split the given digit to determine the fist word. since we display compound word

    // this switch detrmine the fist digit name ex : 2 as twenty

    switch (num / 10)
    {

        // hence it is not suitable to use twenty , thirty ...for the number which is between 11-99 we use special case
    case 1:

        // use modulo opertor to determine the letter for the digit
        switch (num % 10)
        {
        case 0:
            printf("ten.\n");
            return 0;
        case 1:
            printf("eleven.\n");
            return 0;
        case 2:
            printf("twelve.\n");
            return 0;
        case 3:
            printf("thirteen.\n");
            return 0;
        case 4:
            printf("fourteen.\n");
            return 0;
        case 5:
            printf("fifteen.\n");
            return 0;
        case 6:
            printf("sixteen.\n");
            return 0;
        case 7:
            printf("seventeen.\n");
            return 0;
        case 8:
            printf("eighteen.\n");
            return 0;
        case 9:
            printf("nineteen.\n");
            return 0;
        }

    // case 2-90 will have same property
    case 2:
        printf("twenty");
        break;
    case 3:
        printf("thirty");
        break;
    case 4:
        printf("forty");
        break;
    case 5:
        printf("fifty");
        break;
    case 6:
        printf("sixty");
        break;
    case 7:
        printf("seventy");
        break;
    case 8:
        printf("eighty");
        break;
    case 9:
        printf("ninety");
        break;
    }

    // we have determine the fist digit the next one will be determinig the second digit ...one...two..three...

    switch (num % 10)
    {
    case 1:
        printf("-one");
        break;
    case 2:
        printf("-two");
        break;
    case 3:
        printf("-three");
        break;
    case 4:
        printf("-four");
        break;
    case 5:
        printf("-five");
        break;
    case 6:
        printf("-six");
        break;
    case 7:
        printf("-seven");
        break;
    case 8:
        printf("-eight");
        break;
    case 9:
        printf("-nine");
        break;
    }

    printf(".\n");

    return 0;
}