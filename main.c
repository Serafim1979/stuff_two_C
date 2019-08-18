#include <stdio.h>
#include <stdlib.h>
#define SZ 5
////////////////////////////////////////
void swap(int *a, int *b);
void b_sort(int *arr, int SIZE);
int maxArr(int arr[], int SIZE);
////////////////////////////////////////
int main()
{
    int a = 5, b = 10, i;
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    int array[SZ] = {23, 5, 18, 9, 97};

    for(i = 0; i < SZ; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("max = %d\n", maxArr(array, SZ));

    b_sort(array, SZ);

    for(i = 0; i < SZ; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
////////////////////////////////////////
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
////////////////////////////////////////
int maxArr(int arr[], int SIZE)
{
    int i;
    int max = arr[0];
    for(i = 0; i < SIZE; i++)
    {
        if(arr[i] > arr[0])
            max = arr[i];
    }
    return max;
}
////////////////////////////////////////
void b_sort(int *arr, int SIZE)
{
    int i, j, tmp;

    for(i = 0; i < SIZE - 1; i++)
    {
        for(j = 0; j < SIZE - i - 1; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
