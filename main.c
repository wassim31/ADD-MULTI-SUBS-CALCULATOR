#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc , char *argv[])
    {
                int choice, x, y, i;
                double a, b, z;
                // this floating number data type for pow function included by math.h library
                // a is the number / b is the power / z is the result

        printf("\t\tCHOOSE THE CALCULATION METHOD \n\n");
printf(" 1-ADDITION \n 2-SUBSTRACTION \n 3-MULTIPLICATION \n 4-DEVISION \n 5-NUMBER-POWER\n 6-AVERAGE OF NUMBER (1 + 2 + 3..+ n)\n 7-FACTORIAL OF NUMBER (n!)\n\n");
       // choosing the right calculation type
                 scanf("%d", &choice);
switch(choice) {
    case 1:
    printf("YOU CHOSE THE addition type\n");

    printf("THE ADDITION WILL BE LIKE THAT\n");

    printf("\t X + Y = RESULT");
                    printf("ENTER THE X VALUE\n");
    scanf("%d", &x);
                    printf("ENTER THE Y VALUE\n");
    scanf("%d", &y);
                    printf("the result is : %d", x+y);
    break;

    case 2:
        printf("YOU CHOSE THE SUBSTRACTION type\n");

    printf("THE SUBSTRACTION WILL BE LIKE THAT\n");

    printf("\t X - Y = RESULT");
                    printf("ENTER THE X VALUE\n");
    scanf("%d", &x);
                    printf("ENTER THE Y VALUE\n");
    scanf("%d", &y);
                    printf("the result is : %d", x-y);
    break;

    case 3:
            printf("YOU CHOSE THE MULTIPLICATION type\n");

    printf("THE MULTIPLICATION WILL BE LIKE THAT\n");

    printf("\t X * Y = RESULT");
                    printf("ENTER THE X VALUE\n");
    scanf("%d", &x);
                    printf("ENTER THE Y VALUE\n");
    scanf("%d", &y);
                    printf("the result is : %d", x*y);

    break;

    case 4:
                printf("YOU CHOSE THE DEVISION type\n");

    printf("THE DEVISION WILL BE LIKE THAT\n");

    printf("\t X / Y = RESULT");
                    printf("ENTER THE X VALUE\n");
    scanf("%d", &x);
                    printf("ENTER THE Y VALUE\n");
    scanf("%d", &y);
                    printf("the result is : %d", x/y);

    break;

    case 5:
                printf("YOU CHOSE THE NUMBER-POWER CALCULATION type\n\n");

    printf("THE CALCULATION WILL BE LIKE THAT\n\n");

    printf("\tX^n\n\n");
    printf("Enter the number X\n");
                scanf("%lf", &a);
    printf("Enter the power n\n");
                scanf("%lf", &b);
   z = pow(a, b);

    printf("The result is : %.0f \n", z);
    break;

    case 6:
        y = 0;
                    printf("YOU CHOSE THE NUMBER-AVERAGE CALCULATION type\n\n");

    printf("THE CALCULATION WILL BE LIKE THAT\n\n");
    printf("\t 1 + 2 + 3 + ... + n = SUM\n");
    printf("Enter a number\n");
        scanf("%d", &x);
    // DECLARING A LOOP STATEMENT
    for (i = 0 ; i <= x ; i++)
    {
        y = y + i;

    }
        printf("THE AVERAGE SUM OF %d is %d \n\n", x, y);
    break;
    case 7:
            y = 1;
                    printf("YOU CHOSE THE NUMBER-FACTORIAL CALCULATION type\n\n");

    printf("THE CALCULATION WILL BE LIKE THAT\n\n");
    printf("\tEXAMPLE : 3! = 3*2*1 \n");
    printf("Enter a number\n");
        scanf("%d", &x);
    // DECLARING A LOOP STATEMENT
    for (i = 0 ; i <= x ; i++)
    {
        y = y * i;

    }
        printf("THE FACTORIAL OF %d! is %d \n\n", x, y);
    break;

        


    default:
    printf("YOU ARE REAL HUMAN , USE YOUR BRAIN xD");
    break;

} // THE END OF SWITCH STATEMENT


        return 0;
    }
