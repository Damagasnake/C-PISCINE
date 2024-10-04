/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:05:58 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/24 16:59:12 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cont0;

	cont0 = 0;
	while (src[cont0] != '\0' && cont0 < n)
	{
		dest[cont0] = src[cont0];
		cont0++;
	}
	while (cont0 < n)
	{
		dest[cont0] = '\0';
		cont0++;
	}
	return (dest);
}
