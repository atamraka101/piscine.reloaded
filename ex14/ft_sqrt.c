/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:49:38 by atamraka          #+#    #+#             */
/*   Updated: 2021/11/03 16:14:28 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;
	int	multiply;

	index = 1;
	while (index < nb)
	{
		multiply = index * index;
		if (multiply > nb)
			return (0);
		else if (multiply == nb)
			return (index);
		index++;
	}
	return (0);
}
