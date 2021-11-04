#include <stdlib.h>

int *ft_range(int min, int max)
{
	int i;
	int len;
	int *result;
	int value;

	i = 0;
	value = min;
	if (min >= max)
		return (NULL);
	len = max - min;
	result = (int * )malloc(sizeof(int) * len);
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = value;
		value++;
		i++;
	}
	return (result);
}


