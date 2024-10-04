/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:07:59 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/14 12:33:16 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	cont0;
	int	cont1;
	int	swap;

	cont0 = 0;
	cont1 = cont0 + 1;
	if (cont1 > cont0)
	{
		swap = tab[cont0];
		tab[cont0] = tab[cont1];
		tab[cont1] = swap;
		while (*tab < '\0')
		{
			cont1++;
		}
	}
	cont0++;
}
