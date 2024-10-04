/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:21:10 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/21 16:15:42 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	cont0;

	cont0 = 0;
	while (src[cont0] != '\0' )
	{
		dest[cont0] = src[cont0];
		cont0++;
	}
	dest[cont0] = '\0';
	return (dest);
}
