#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("\tWELCOME TO WASS-CALCULATOR\n");
    //this variable should be named choice instead of chose (chose is a verb...)
    int choice;
    printf("DO YOU WANT \n1-ADDITION\n2-SUBSTRACTION\n3-MULTIPLICATION\n\n");
    scanf("%d", &choice);
    // No matter what operation you will perform, you'll need 3 variables.
    // Better to declare them here and use them in the different blocks
    // You had declared 9 variables, 3 per block...
    int x, y, result;
    if (choice == 1)
    {
        printf("YOU CHOSE ADDITION CALCULATOR\n");

        printf("THE ADDITION WILL BE LIKE THAT : \n");

        printf("X + Y = RESULT\n");

        printf("ADD THE X VARIABLE\n");

        scanf("%d", &x);

        printf("ADD THE Y VARIABLE\n");

        scanf("%d", &y);

        result = x + y;

        printf("THE RESULT IS : %d", result);

/* THE ADDITION PART IS FIINSHED */

    }
    else if (choice == 2)
    {

        printf("YOU CHOSE SUBSTRACTION CALCULATOR\n");

        printf("THE SUBSCTRATION WILL BE LIKE THAT : \n");

        printf("X - Y = RESULT\n");

        printf("ADD THE X VARIABLE\n");

        scanf("%d", &x);

        printf("ADD THE Y VARIABLE\n");

        scanf("%d", &y);

        result = x - y;

        printf("THE RESULT IS : %d", result);

        /* THE SUBSTRACTION PART IS FIINSHED */

    }
    else if (choice == 3)
    {
        printf("YOU CHOSE MULTIPLICATION CALCULATOR\n");

        printf("THE MULTIPLICATION WILL BE LIKE THAT : \n");

        printf("X * Y = RESULT\n");
        printf("ADD THE X VARIABLE\n");

        scanf("%d", &x);

        printf("ADD THE Y VARIABLE\n");

        scanf("%d", &y);

        result = x * y;

        printf("THE RESULT IS : %d", result);

        /* THE MULTIPLICATION PART IS FIINSHED */

    }
    else
        {
        printf("YOU ARE REAL HUMAN , CALCULATE USING YOUR BRAIN xD");
    }
    return 0;
}


void anotherPossibility()
{
    printf("\tWELCOME TO WASS-CALCULATOR\n");
    int choice, x, y;
    printf("DO YOU WANT \n1-ADDITION\n2-SUBSTRACTION\n3-MULTIPLICATION\n\n");
    scanf("%d", &choice);
    switch choice:
        {
            case 1:
                printf("YOU CHOSE ADDITION CALCULATOR\n");

            printf("THE ADDITION WILL BE LIKE THAT : \n");

            printf("X + Y = RESULT\n");

            printf("ADD THE X VARIABLE\n");

            scanf("%d", &x);

            printf("ADD THE Y VARIABLE\n");

            scanf("%d", &y);

            printf("THE RESULT IS : %d", x+y);
            break;

            case 2:
                printf("YOU CHOSE SUBSTRACTION CALCULATOR\n");

            printf("THE SUBSCTRATION WILL BE LIKE THAT : \n");

            printf("X - Y = RESULT\n");

            printf("ADD THE X VARIABLE\n");

            scanf("%d", &x);

            printf("ADD THE Y VARIABLE\n");

            scanf("%d", &y);

            printf("THE RESULT IS : %d", x-y);
            break;

            case 3:
                printf("YOU CHOSE MULTIPLICATION CALCULATOR\n");

            printf("THE MULTIPLICATION WILL BE LIKE THAT : \n");

            printf("X * Y = RESULT\n");
            printf("ADD THE X VARIABLE\n");

            scanf("%d", &x);

            printf("ADD THE Y VARIABLE\n");

            scanf("%d", &y);

            printf("THE RESULT IS : %d", x*y);
            break;

            default:
                printf("YOU ARE REAL HUMAN , CALCULATE USING YOUR BRAIN xD");
            break;
        }
}
