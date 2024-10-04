/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:10:56 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/24 23:22:35 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	unsigned int	comp;

	comp = 0;
	while (s1[comp] != '\0' && s2[comp] != '\0'
		&& s1[comp] == s2[comp] && comp < n)
	{
		comp++;
	}
	if (comp == n)
		return (0);
	return ((unsigned char)s1[comp] - (unsigned char)s2[comp]);
}
