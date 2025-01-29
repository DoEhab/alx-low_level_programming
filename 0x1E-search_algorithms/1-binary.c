#include<stdio.h>

/**                                                                             
 * binary_search: - use binary search alg for search                    
 * @array: int - array to be serched                                            
 * @size: the size of the array                                                
 * @value: the target value                                           
 *                                                                              
 * Description: binary search algorith impl                                                        
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t mid = 0;
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);


	while (low <= high)
	{
		mid = (high + low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
		{
			low = mid + 1;
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
	}
	return (-1);
}
