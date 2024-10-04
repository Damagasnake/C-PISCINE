/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:36:35 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/06 17:36:42 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int col, int row);
void	ft_putchar(char c);

int	main(void)
{
	rush(5, 3);
	ft_putchar('\n');
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	ft_putchar('\n');
	rush(4, 4);
}
