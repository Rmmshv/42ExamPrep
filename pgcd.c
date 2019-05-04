/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 08:31:18 by resheva           #+#    #+#             */
/*   Updated: 2019/05/04 08:37:40 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, const char **argv)
{
	int	nbr1;
	int nbr2;

	if (argc == 3)
	{
		while ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}
