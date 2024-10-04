/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_direct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <rfleritt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:48:38 by rfleritt          #+#    #+#             */
/*   Updated: 2024/07/21 20:54:57 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

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
