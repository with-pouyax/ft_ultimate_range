#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	n_elements;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	n_elements = max - min;
	array = malloc(n_elements * sizeof(int));
	if (array == NULL)
		return (-1);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (n_elements);
}