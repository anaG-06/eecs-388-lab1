/*
Author: Ana Gonzalez Yuil
Date Modified: 9.4.26
Lab 1, Problem 4
*/

#include <stdio.h>

int main(){
    int binary[] = {0,0,0,0,0,0,0,0}; //holds binary form of number with 8 bits
    int number; //user defined number to be converted to binary

    printf("Enter integer:\n");
    scanf("%d", &number);

    int rem; //stores remainder to add to binary 
    int position = 1; //helper variable for adding to binary number from end 
    int count; //holds value of set bits

    while (number > 0)
    {
        rem = number % 2; //remainder found though mod division
        number /= 2; //quotient is automatically floored

        printf("\nrem: %d\nnumber: %d\n\n",rem,number);

        if (rem == 1) //tracks set bits
        {
            count++;
        }

        binary[8-position] = rem; //adds the remainder to the end of binary so that it is formatted correctly
                
        position++; //increments position to move backwards through binary
    }

    for (int i=0; i<8;i++) //prints binary equivalent 
    {
        printf("%d",binary[i]);
    }

    printf("\nSet bits: %d\n", count);
}