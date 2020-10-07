#include <stdio.h>
#include <stdlib.h>
int main (int argc , char *argv[])
        {
printf("\tWELCOME TO WASS-CALCULATOR\n");

    int chose;

printf("DO YOU WANT \n1-ADDITION\n2-SUBSTRACTION\n3-MULTIPLICATION\n\n");

    scanf("%d", &chose);
if (chose == 1) {
    printf("YOU CHOSE ADDITION CALCULATOR\n");

    printf("THE ADDITION WILL BE LIKE THAT : \n");

    printf("X + Y = RESULT\n");
            int x, y;

    printf("ADD THE X VARIABLE\n");

            scanf("%d", &x);

    printf("ADD THE Y VARIABLE\n");

    scanf("%d", &y);

            int result = 0;
    result = x + y;

    printf("THE RESULT IS : %d", result);

/* THE ADDITION PART IS FIINSHED */

} else if (chose == 2) {

        printf("YOU CHOSE SUBSTRACTION CALCULATOR\n");

    printf("THE SUBSCTRATION WILL BE LIKE THAT : \n");

    printf("X - Y = RESULT\n");

                int a, b;

    printf("ADD THE X VARIABLE\n");

            scanf("%d", &a);

    printf("ADD THE Y VARIABLE\n");

        scanf("%d", &b);

            int result1 = 0;

        result1 = a - b;

    printf("THE RESULT IS : %d", result1);

    /* THE SUBSTRACTION PART IS FIINSHED */


} else if (chose == 3)
{
        printf("YOU CHOSE MULTIPLICATION CALCULATOR\n");

    printf("THE MULTIPLICATION WILL BE LIKE THAT : \n");

    printf("X * Y = RESULT\n");
    int c, d;
    printf("ADD THE X VARIABLE\n");

            scanf("%d", &c);

    printf("ADD THE Y VARIABLE\n");

            scanf("%d", &d);

            int result2 = 0;

            result2 = c * d;

    printf("THE RESULT IS : %d", result2);

    /* THE MULTIPLICATION PART IS FIINSHED */

} else {

    printf("YOU ARE REAL HUMAN , CALCULATE USING YOUR BRAIN xD");
}









        return 0;

        }

