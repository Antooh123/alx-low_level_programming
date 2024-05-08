#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if value is not present
 *         or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low, high, mid;

    if (array == NULL)
        return (-1);

    printf("Searching in array: ");
    for (low = 0; low < size; low++)
    {
        if (low > 0)
            printf(", ");
        printf("%d", array[low]);
    }
    printf("\n");

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (array[mid] == value)
        {
            printf("Found %d at index: %d\n\n", value, mid);
            return (mid);
        }
        else if (array[mid] < value)
        {
            low = mid + 1;
            printf("Searching in array: ");
            for (mid = low; mid < high; mid++)
            {
                if (mid > low)
                    printf(", ");
                printf("%d", array[mid]);
            }
            printf("\n");
        }
        else
        {
            high = mid - 1;
            printf("Searching in array: ");
            for (mid = low; mid <= high; mid++)
            {
                if (mid > low)
                    printf(", ");
                printf("%d", array[mid]);
            }
            printf("\n");
        }
    }

    printf("Found %d at index: -1\n\n", value);
    return (-1);
}
