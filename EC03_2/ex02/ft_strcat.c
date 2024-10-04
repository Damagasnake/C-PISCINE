/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:18:45 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/24 23:56:14 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	cont1;
	int	cont0;

	cont0 = 0;
	cont1 = 0;
	while (dest[cont1] != '\0')
	{
		cont1++;
	}
	while (src[cont0] != '\0')
	{
		dest[cont1 + cont0] = src[cont0];
		cont0++;
	}
	dest[cont1 + cont0] = '\0';
	return (dest);
}
