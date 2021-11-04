/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:43:18 by atamraka          #+#    #+#             */
/*   Updated: 2021/10/29 15:37:05 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb >= 1 && nb <= 12)
	{
		while (nb >= 1)
		{
			factorial = factorial * nb;
			nb--;
		}
		return (factorial);
	}
	else
	{
		return (0);
	}
}	
