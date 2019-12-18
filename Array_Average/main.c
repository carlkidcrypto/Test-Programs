#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    int test1D[] = {1,2,3,4,5,6,7,8,9,10};
    int test2D[][10] = {{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9},};
    int size = sizeof(test1D)/sizeof(int); // get the size of the array bytes/int bytes = sizes
    array_average_1D(test1D,size);
    array_average_2D(10,10,test2D);
}

void array_average_1D(int arr[],int size)
{
    float sum = 0;
    printf("Size of arary: %d\n",size);

    int i;
    for(i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    printf("The sum of the 1D array is: %f\n",sum);
    float average = sum / size;
    printf("The average of the 1D array is: %f\n",average);
}

void array_average_2D(int row,int col, int arr[][col])
{
    float sum = 0;
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("The sum of the 2D array is: %f\n",sum);
    float average = sum / (row * col);
    printf("The average of the 2D array is: %f\n",average);


}