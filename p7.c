/*
Author: Ana Gonzalez Yuil
Date Modified: 9.2.26
Lab 1, Problem 7
*/

#include <stdio.h>

int main()
{
    int temp;
    
    printf("Enter integer:\n");
    scanf("%d", &temp);
    
    int* temp_ptr = &temp;

    //printing the value of temp using temp
    printf("%d\n",temp);

    //printing the value of temp using temp_ptr
    printf("%d\n", *temp_ptr);

    //printing the address of temp using temp's reference
    printf("%p\n",&temp);

    //printing the adress of temp using temp_ptr
    printf("%p\n",temp_ptr);


}