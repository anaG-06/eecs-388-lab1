/*
Author: Ana Gonzalez Yuil
Date Modified: 9.2.26
Lab 1, Problem 1
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int first_op; //the first operand from the user
    int second_op; // the second operand from the user; not used if squaring or cubing
    char operator; //operator choice from user
    int result; //stores results 

    printf("Enter operation:\n");
    scanf("%c", &operator);

    if (operator == '+')// adds operands
    {
        printf("Enter 1st operand:\n");
        scanf("%d",&first_op);

        printf("Enter 2nd operand:\n");
        scanf("%d",&second_op);

        result = first_op + second_op;

        printf("%d\n",result);
    }

    else if (operator == '-')// subtracts operands
    {
        printf("Enter 1st operand:\n");
        scanf("%d",&first_op);

        printf("Enter 2nd operand:\n");
        scanf("%d",&second_op);

        result = first_op - second_op;

        printf("%d\n",result);
    }

    else if (operator == '*')// mutiplies operands
    {
        printf("Enter 1st operand:\n");
        scanf("%d",&first_op);

        printf("Enter 2nd operand:\n");
        scanf("%d",&second_op);

        result = first_op * second_op;

        printf("%d\n",result);
    }

    else if (operator == '/') //divides operands, result is floored.
    {
        printf("Enter 1st operand:\n");
        scanf("%d",&first_op);

        printf("Enter 2nd operand:\n");
        scanf("%d",&second_op);

        result = first_op / second_op;

        printf("%d\n",result);
    }

    else if (operator == 's') //squares first operand
    {
        printf("Enter 1st operand:\n");
        scanf("%d",&first_op);

        result = first_op * first_op;

        printf("%d\n",result);
    }

    else if (operator == 'c') //cubes first operand
    {
        printf("Enter 1st operand:\n");
        scanf("%d",&first_op);

        result = first_op * first_op * first_op;

        printf("%d\n",result);
    }
}