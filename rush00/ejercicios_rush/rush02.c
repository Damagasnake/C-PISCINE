/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:32:43 by davidma2          #+#    #+#             */
/*   Updated: 2024/07/06 17:33:25 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	funcion_primera_linea(int col)
{
	int	cont;

	cont = 1;
	while (cont <= col)
	{
		if (cont == 1)
		{
			ft_putchar('A');
			if (col == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (cont == col)
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('B');
		}
		cont++;
	}
}

void	funcion_ultima_linea(int col)
{
	int	cont;

	cont = 1;
	while (cont <= col)
	{
		if (cont == 1)
		{
			ft_putchar('C');
			if (col == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (cont == col)
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('B');
		}
		cont++;
	}
}

void	fila_intermedia(int col)
{
	int		cont;

	cont = 1;
	while (cont <= col)
	{
		if (cont == 1)
		{
			ft_putchar('B');
			if (col == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (cont == col)
		{
			ft_putchar('B');
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
			funcion_primera_linea(col);
		}
		else if (cont == row)
		{
			funcion_ultima_linea(col);
		}
		else
		{
			fila_intermedia(col);
		}
		cont++;
	}
}
