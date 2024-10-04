/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:31:08 by marcsan2          #+#    #+#             */
/*   Updated: 2024/07/23 17:15:54 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char	*ft_direct(char *dir)
{
	int		fd;
	char	c;
	char	*d;
	int		i;

	i = 0;
	fd = open(dir, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	while (read(fd, &c, sizeof(c) != 0))
		i++;
	close(fd);
	fd = open(dir, O_RDONLY);
	d = (char *)malloc(i + 1);
	read(fd, d, i);
	close(fd);
	d[i] = '\0';
	return (d);
}

int	get_size_row(char **str)
{
	int	count;

	count = 0;
	while (str[0][count] != '\0')
		count++;
	return (count);
}

int	get_size_col(char **str)
{
	int	count;

	count = 0;
	while (str[count][0] != '\0')>
		count++;
	return (count);
}