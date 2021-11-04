#include<stdio.h>

int		main(void)
{
    int		i;
    int		*tab;

    tab = ft_range((-5), 1);
    i = 0;
    while (i < 7)
    {
    	printf("%d\n", tab[i]);
    	i++;
    }
}