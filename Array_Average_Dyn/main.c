#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main()
{
    static int size = 10;
    int *array_1D = (int*)malloc(size * sizeof(int)); // allocate the memory
    
    int i;
    int val = 1;
    for(i=0; i<size;i++)
    {
        array_1D[i] = val;
        val++;
    }

    array_average_1D_Dyn(array_1D,size);
    free(array_1D); // free the  mem
    int **array_2D; // array name
    static int row = 10;
    static int col = 10;
    array_2D = (int**)malloc(row * sizeof(int*)); // allocate thr rows
    int j;
    for(j=0;j<size;j++)
    {
        array_2D[j] = (int*)malloc(col * sizeof(int)); // allocate the columns
    }

    int r,c;
    int val2 = 1;
    for(r=0;r<size;r++)
    {
        for(c=0;c<size;c++)
        {
            array_2D[r][c] = val2; // load stuff into array
            val2++;
        }
    }

    array_average_2D_Dyn(row,col,array_2D); // row,col,array

    int a;
    for (int a=0;a<row;a++)
        free (array_2D[a]); // free the rows

    free(array_2D); // free the columns
}

void array_average_1D_Dyn(int arr[],int size)
{   
    float sum = 0;
    int i;
    for(i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    printf("The sume of the 1D array is: %f\n",sum);
    float average = sum / size;
    printf("The average of the 1D array is: %f\n",average);
}
void array_average_2D_Dyn(int row,int col,int **arr)
{
    float sum = 0;
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum = sum + (float)arr[i][j];
        }
    }
    printf("The sume of the 2D array is: %f\n",sum);
    float average = sum / (float) (row*col);
    printf("The average of the 2D array is: %f\n",average);
}