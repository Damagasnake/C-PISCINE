/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:26:39 by marcsan2          #+#    #+#             */
/*   Updated: 2024/07/23 16:21:04 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc,char **argv)
{
	if(argc > 1)
	{
		write(1,"Error\n",6);
		return(0);
	}
	int	size;

	size = get_size_laterals(argv);
} 