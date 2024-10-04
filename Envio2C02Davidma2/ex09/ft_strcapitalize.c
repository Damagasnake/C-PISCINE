/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:00:19 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/24 11:06:36 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	cont0;

	cont0 = 1;
	while (str[cont0] != '\0')
	{
		if ((str[cont0 - 1] < 'A' || str[cont0 - 1] > 'Z'
				|| str[cont0 - 1] < 'a'
				|| str[cont0 - 1] > 'z' || str[cont0 - 1] < '0'
				|| str[cont0 - 1] > '9') && str[cont0] >= 'a'
			&& str[cont0] <= 'z')
		{
			str[cont0] = str[cont0] - 32;
		}
		cont0++;
		if (((str[cont0 - 1] >= 'A' && str[cont0 - 1] <= 'Z')
				|| (str[cont0 - 1] >= 'a'
					&& str[cont0 - 1] <= 'z')) && str[cont0] >= 'A'
			&& str[cont0] <= 'Z')
		{
			str[cont0] = str[cont0] + 32;
		}
	}
	return (str);
}
