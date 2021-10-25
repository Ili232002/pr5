#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "func_prot.h"

void outArray(int *, int);

void func(void)
{
    int arraySize = 35, p = 0, i=0, m;
    int *array = (int *) malloc(arraySize * sizeof(int));
    for (int i = 0; i < arraySize; ++i)
    {
        array[i] = rand() % 101 - 50;
    }
    p = array[0];
    puts("Filling the array with random numbers:");
    outArray(array, arraySize);
    puts("\n\nArray after execution of the task:");
    for (i = 1; i < arraySize; ++i)
    {
        if(p < abs(array[i]))
        {
            p = abs(array[i]);
            m = i;
        }

    }
    array[m] = array[m] * -1;
    outArray(array, arraySize);
}

void outArray(int *ptrArray, int array_size)
{
    for (int i = 0; i < array_size; ++i)
        printf("%4d;", ptrArray[i]);
    puts(" ");
}
