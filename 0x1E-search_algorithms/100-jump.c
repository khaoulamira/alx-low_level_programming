#include "search_algos.h"

/**
 * jump_search - function that searches for a value
 * in a sorted array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
    size_t i, step, jump;

    if (array == NULL || size == 0)
        return (-1);

    step = sqrt(size);

    for (i = 0, jump = step; jump < size && array[jump] < value; i = jump, jump += step)
    {
        printf("Value checked array [%ld] = [%d]\n", jump, array[jump]);
    }

    printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

    for (; i < size && array[i] < value; i++)
    {
        printf("Value checked array [%ld] = [%d]\n", i, array[i]);
    }

    if (i < size && array[i] == value)
    {
        printf("Value checked array [%ld] = [%d]\n", i, array[i]);
        return (i);
    }
    else
    {
        printf("Value not present in array\n");
        return (-1);
    }
}
