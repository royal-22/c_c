#include <stdio.h>

void sort(int array[], int size)
{
    for(int n = 0; n < size - 1; n++)
    {
        for(int i = 0; i < size -n - 1; i ++)
        {
            if(array[i] > array[i + 1]){ //to reverse option just change the grater symbol
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
}
