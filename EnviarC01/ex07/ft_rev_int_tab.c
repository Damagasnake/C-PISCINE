/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:42:55 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/14 12:36:05 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont0;
	int	cont1;
	int	swap;

	cont0 = 0;
	cont1 = size - 1;
	while (cont0 < cont1 / 2)
	{
		swap = tab[cont0];
		tab[cont0] = tab[cont1];
		tab[cont1] = swap;
		cont0++;
		cont1--;
	}
}
