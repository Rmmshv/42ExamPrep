/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <resheva@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 07:16:23 by resheva           #+#    #+#             */
/*   Updated: 2019/04/16 07:24:40 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d", (atoi(av[1]) + atoi(av[3])));
		if (av[2][0] == '-')
			printf("%d", (atoi(av[1]) - atoi(av[3])));
		if (av[2][0] == '*')
			printf("%d", (atoi(av[1]) * atoi(av[3])));
		if (av[2][0] == '/')
			printf("%d", (atoi(av[1]) / atoi(av[3])));
		if (av[2][0] == '%')
			printf("%d", (atoi(av[1]) % atoi(av[3])));
	}
	printf("\n");
	return (0);
}
