/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:23:17 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/24 18:29:29 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		comp;

	comp = 0;
	while (s1[comp] != '\0' && s2[comp] != '\0' && s1[comp] == s2[comp])
	{
		comp++;
	}
	return ((unsigned int)s1[comp] - (unsigned int)s2[comp]);
}
