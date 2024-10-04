/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:29:32 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/06 17:30:36 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_row(int col)
{
	int	cont;

	cont = 1;
	while (cont <= col)
	{
		if (cont == 1)
		{
			ft_putchar('/');
			if (col == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (cont == col)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('*');
		}
		cont++;
	}
}

void	last_row(int col)
{
	int	cont;

	cont = 1;
	while (cont <= col)
	{
		if (cont == 1)
		{
			ft_putchar('\\');
			if (col == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (cont == col)
		{
			ft_putchar('/');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('*');
		}
		cont++;
	}
}

void	middle_row(int col)
{
	int		cont;

	cont = 1;
	while (cont <= col)
	{
		if (cont == 1)
		{
			ft_putchar('*');
			if (col == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (cont == col)
		{
			ft_putchar('*');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
		cont++;
	}
}

void	rush(int col, int row)
{
	int		cont;

	cont = 1;
	while (cont <= row)
	{
		if (cont == 1)
		{
			first_row(col);
		}
		else if (cont == row)
		{
			last_row(col);
		}
		else
		{
			middle_row(col);
		}
		cont++;
	}
}
