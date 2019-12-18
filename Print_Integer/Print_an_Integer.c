/* This Program will print out an i nteger that is entered by a user.
** 09/10/19
** Carlos Santos
** Grabbed and modified from: https://www.geeksforgeeks.org/how-to-read-and-print-an-integer-value-in-c-2/
*/

#include <stdio.h>
int main()
{
    int number;
    // printf() dislpays the formatted output 
    printf("Enter an integer: ");  
    
    // scanf() reads the formatted input and stores them
    scanf("%d", &number);  
    
    // printf() displays the formatted output
    printf("You entered: %d", number);
    return 0;
}