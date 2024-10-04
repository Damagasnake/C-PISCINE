/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:25:58 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/10 14:57:38 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	res;

	div = *a / *b;
	res = *a % *b;
	*a = div;
	*b = res;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 20;
// 	b = 5;
// 	ft_ultimate_div_mod(&a, &b);
// 	write(1, &a, 1);
// 	write(1, &b, 1);
// }
