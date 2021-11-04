/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:40:45 by atamraka          #+#    #+#             */
/*   Updated: 2021/11/01 16:51:50 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strlens(char *str)
{
	int	len;

	len = 1;
	while (str[len - 1] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;

	len = strlens(src);
	copy = (char *)(malloc(sizeof(char) * len));
	if (!copy)
	{
		return (NULL);
	}
	len = 0;
	while (src[len] != '\0')
	{
		copy[len] = src[len];
		len++;
	}
	copy[len] = '\0';
	return (copy);
}
