// lab 1, problem 2, 8.31.26
#include <stdio.h>

int main()
{
    // provided array
    int nums[10] = {500, 1, 255, 7, -12, 40, 42, 999, 50, 227};
    
    int smallest = nums[0];// smallest number, set to first value as default
    int largest = nums[0];// largest number, set to first value as default
    
    int i; //iteration variable
    char choice; //user input
    
    printf("Enter m,n or b: \n");
    scanf("%c", &choice);
    
    for (i=0; i<10; i++) //for each element in the array, iterate through and find both the largest and smallest value
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
        
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }
    
    // this if statement block processes the user's choice and outputs the corresponding numbers.
    if (choice == 'm')
    {
        printf("%d \n", largest);
    } 
    
    else if (choice == 'n')
    {
        printf("%d \n", smallest);
    }
    
    else if (choice == 'b')
    {
        printf("%d %d \n", largest, smallest);
    }
    
}