#include<stddef.h>
#include<stdio.h>
/**
  * linear_search - search in the array
  *
  * @array: the array to be search
  * @size: array size
  * @value: the target value
  * Return: value if found and -1 otherwise
  */
int linear_search(int *array, size_t size, int value)
{
        size_t i;

        if (array == NULL)
                return (-1);

        for (i = 0; i < size; i++)
        {
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
                if (array[i] == value)
                        return (i);
        }
        return (-1);

}
