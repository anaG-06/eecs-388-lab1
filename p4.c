/*
Author: Ana Gonzalez Yuil
Date Modified: 9.2.26
Lab 1, Problem 4
*/

#include <stdio.h>

int main()
{
    int len; //stores length of array defined by user input
    int number; //stores element that will be added to array
    int count = 0; // stores count of consecutively increasing ints

    printf("How big is the array?\n");
    scanf("%d", &len);

    int arr[len]; //initialize array with user defined size

    printf("Enter %d integers:\n", len);
    
    //adds values to arr using for loop to ensure correct amount of elements with len
    for (int i=0; i < len; i++)
    {
        scanf("%d",&number);
        arr[i] = number;

        if (arr[i] > arr[i-1]  && i != 0) 
        //if the current value added is greater than the previous value, increment count by 1
        //excludes the first element to prevent out of bounds
        {
            count++;
        }
    }

    printf("%d\n", count);
}