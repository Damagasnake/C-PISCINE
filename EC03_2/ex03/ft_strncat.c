/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 01:38:22 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/25 02:04:44 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned	int	cont1;
	unsigned	int	cont0;

	cont0 = 0;
	cont1 = 0;
	while (dest[cont1] != '\0')
	{
		cont1++;
	}
	while (src[cont0] != '\0' && cont0 < nb)
	{
		dest[cont1 + cont0] = src[cont0];
		cont0++;
	}   
	dest[cont1 + cont0] = '\0';
	return (dest);
}