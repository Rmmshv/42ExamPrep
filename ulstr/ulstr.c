/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 22:28:59 by resheva           #+#    #+#             */
/*   Updated: 2019/01/29 23:01:16 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Write a program that takes a string and reverses the case of all its letters.
  Other characters remain unchanged.

  You must display the resi=ult followed by a newline.

  If the number of arguments is not 1, the program displays '\n'.
*/

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	char	letter;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			letter = av[1][i];
			if('A' <= av[1][i] && av[1][i] <= 'Z')
				letter = letter + 32;
			else if ('a' <= av[1][i] && av[1][i] <= 'z')
				letter = letter - 32;
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
