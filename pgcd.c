/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:09:10 by resheva           #+#    #+#             */
/*   Updated: 2019/04/30 13:15:00 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int	nbr1;
	int	nbr2;

	if (ac == 3)
	{
		if ((nbr1 = atoi(av[1])) > 0 && (nbr2 = atoi(av[2])) > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1
			}
			orintf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}
