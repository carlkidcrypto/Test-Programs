/* This Program will print out a string that is entered by a user.
** 09/10/19
** Carlos Santos
** Grabbed and modified from: https://www.geeksforgeeks.org/taking-string-input-space-c-3-different-methods/
*/

#include <stdio.h>
int main()
{
    while(1)
    {
        char str[20];
        // printf() dislpays the formatted output 
        printf("Enter some text: ");  
    
        // fgets():  char *fgets(char *str, int size, FILE *stream)
        fgets(str, 20, stdin);  
    
        // printf() displays the formatted output
        printf("You entered: %s", str);
    }

    return 1;
}