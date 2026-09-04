/*
Author: Ana Gonzalez Yuil
Date Modified: 9.4.26
Lab 1, Problem 3
*/

#include <stdio.h>

int main()
{
    
    int num1;
    int num2;
    int num3;
    int middle; //value that will be returned

    printf("Enter three integers:\n"); //asks user for input
    scanf("%d %d %d",&num1,&num2,&num3);//assigning user input to variables

    int middle_of_three(int a,int b,int c)
    {
        int nums[] = {num1,num2,num3}; //initializes array of values for sorting
        int temp; // temporary value for sorting

        // the nested for loop below sorts the array from least to greatest.
        // it compares each element with the other elements in the array, and swaps if the first is lesser than the second
        // (bubble sort)
        for (int i=0; i<3; i++) //first element
        {
            for (int j=0;j<3; j++) //second element
            {
                if (nums[i] < nums[j]) //swaps if first element is smaller than second
                {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }

        middle = nums[1];

        printf("%d\n", middle);
    }

    middle_of_three(num1,num2,num3); //function call
    
}