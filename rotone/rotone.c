/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 23:07:04 by resheva           #+#    #+#             */
/*   Updated: 2019/01/29 23:24:53 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Write a program that takes a string and displays it, replacing each of its letters by the next one in alphabetical order.

  'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

  The output will be followed by a newline.

  If the number of arguments is not 1, the program displays \n.

Examples:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
*/

#include <unistd.h>

int		main(int ac, char **av)
{
	int	i;
	char	letter;

	i = 0
		;
	if (ac == 2)
	{
		while (av[1][i])
		{
			letter = av[1][i];
			if ('A' <= av[1][i] && av[1][i] <= 'Y')
				letter = letter + 1;
			if ('a' <= av[1][i] && av[1][i] <= 'y')
				letter = letter + 1;
			if ('z' == av[1][i] && av[1][i] == 'Z')
				letter = letter - 25;
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
