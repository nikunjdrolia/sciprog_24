#include <stdio.h>
#include <stdlib.h>

double* allocatearray(int size)
{
    return (double*)malloc(size * sizeof(double));
}

void fillwithones(double* array, int size)
{
    for(int i=0;i<size;i++)
    {
        array[i]=1;
    }
}

void printarray(double* array, int size)
{
    for (int i=0;i<size;i++)
    {
        printf("%lf \n", array[i]);
    }
    printf("\n");
}

void freearray(double* array)
{
    free(array);
}

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    double* myarray=(double*)malloc(size * sizeof(double));
    if(myarray == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    fillwithones(myarray, size);

    printf("Array filled with ones: ");
    printarray(myarray, size);

    freearray(myarray);

    return 0;
}