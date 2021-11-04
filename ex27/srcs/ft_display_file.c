/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:31:04 by atamraka          #+#    #+#             */
/*   Updated: 2021/11/03 12:31:24 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_files(char *arg)
{
	int		file;
	char	input;

	file = open(arg, O_RDONLY);
	if (file < 0)
	{
		return ;
	}
	while (read(file, &input, 1))
	{
		write(1, &input, 1);
	}
	close(file);
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		display_files(argv[1]);
	return (0);
}
