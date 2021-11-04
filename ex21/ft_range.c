/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:01:45 by atamraka          #+#    #+#             */
/*   Updated: 2021/11/04 10:52:39 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	counter;

	counter = 0;
	if (min >= max)
		return (NULL);
	range = (int *)(malloc(sizeof(int) * (max - min)));
	if (!range)
		return (NULL);
	while (counter < (max - min))
	{
		range[counter] = min + counter;
		counter++;
	}
	return (range);
}