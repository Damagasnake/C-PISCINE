/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <rfleritt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 20:55:51 by rfleritt          #+#    #+#             */
/*   Updated: 2024/07/21 21:00:36 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

extern char	*ft_direct(char *dir);

int	main(void)
{
	char	*valor;

	valor = ft_direct("/home/rfleritt/Documents/Rush02/numbers.dict");
	write(1, &valor, 1)
	free(valor);
	return (0);
}