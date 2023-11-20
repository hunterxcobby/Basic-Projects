#include "main.h"

int main(void)
{
    int i;
    int arr[] = {15, 5, 24, 8, 1, 3, 16, 10, 20};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    mergeSort(arr, 0, arr_size - 1);

    printf("Sorted Array: ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
