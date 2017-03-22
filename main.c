/*
 
a3
Part of Assignment 3
Created By Eric Israel
Last Modified by Eric Israel
Created On 10/5/12016
last modified on 10/6/2016
*/


#include <stdio.h>
#include <math.h>

int main()
{
    // Main Menu
    
    printf("Welcome to the Bit Operation Calculator!\n\n");
    printf("\t\t-----Main Menu-----\n\n");
    printf("Choose one of the following: \n\n");
    
    // Operation Choices
    
    int choice;
    
    printf("1: Perform Left Bit Shift Operation (one value)\n");
    printf("2: Perform Right Bit Shift Operation (one value) \n");
    printf("3: Perform Binary AND Operation (two values) \n");
    printf("4: Perform Binary OR Operation (two values)  \n");
    printf("5: Perform Binary One's Complement (~) Operation (one value) \n");
    printf("6: Perform Binary XOR Operation (two values) \n" );
    printf("7: Quit. \n\n");
    
    // input
    printf("Enter operation here: ");
    scanf("%d", &choice);
    
// Operation Calculations
    
    // Right shift operation

    int num1, num2, i, shift;
   
    if (choice == 1)
    {
    printf("Enter a based ten number: ");
    scanf("%d", &num1);
    printf("Enter how many places you want to shift it: ");
    scanf("%d", &shift);
    for (i=0; i<=num1; ++i)
        printf("Right shift by %d: %d\n", i, num1>>i);
    }
    
    // left shift operation

    else if (choice == 2)
    {
    printf("Enter a based ten number: ");
    scanf("%d", &num1);
    printf("Enter how many places you want to shift it: ");
    scanf("%d", &shift);
    for (i=0; i<=2; ++i)
        printf("Left shift by %d: %d\n", i, num1<<i);
    }
    
    // And operation
    
    
    else if (choice == 3)
    {
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);
    printf("\nAND output = %d\n\n", num1&num2);
    }
   
    // OR operation
    

    else if (choice == 4)
    {
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);
    printf("\nOR Output = %d\n\n", num1|num2);
    }
    
    
    // One's complement
    
    else if (choice == 5)
    {
        printf("Enter a number: ");
        scanf("%d", &num1);
        printf("\nComplement = %d\n\n",~num1 *-1); // takes the number entered by user and gives its complement
                                                // multiplied by -1 to get rid of negative
    }
    
    
    // XOR Operation
    
    else if (choice == 6)
    {
        printf("Enter a number: ");
        scanf("%d", &num1);
        printf("Enter another number: ");
        scanf("%d", &num2);
        printf("XOR Ootput = %d", num1^num2); // uses the XOR symbol ^ on the numbers entered by user
    }
    
    // Quit
    
    else if (choice == 7)
    {
        printf("\nThank you for using the bit operator calculator\n\n");
        
        
    }

 
    return (0);
}
