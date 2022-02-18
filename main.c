#include <stdio.h>
#include <stdlib.h>




int main()
{
    int num1, num2, operators;

    printf("\n\t\t\tEnter First Number\t:");
    scanf(" %d", &num1);
    printf("\n\t\t\tChoose Operator\n\t\t\t1. + \n\t\t\t2. - \n\t\t\t3. * \n\t\t\t4. / \t:");
    scanf(" %d", &operators);
    printf("\n\t\t\tEnter Second Number\t:");
    scanf(" %d", &num2);

    switch(operators)
    {
    case 1:
        printf("\n\t\t\t %d + %d = %d", num1, num2, num1+num2);
        break;
    case 2:
        printf("\n\t\t\t %d - %d = %d", num1, num2, num1-num2);
        break;
    case 3:
        printf("\n\t\t\t %d * %d = %d", num1, num2, num1*num2);
        break;
    case 4:
        printf("\n\t\t\t %d / %d = %d", num1, num2, num1/num2);
        break;
    }
}
