/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 02:02:15 by resheva           #+#    #+#             */
/*   Updated: 2019/01/30 03:23:21 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Write a program called alpha_mirrir that takes a string and displays this string after replacing each alphabeticalcharacter by the opposite alphabetical charachter, followed by a newline.

  'a' becomes 'z', 'Z' becomes 'A'
  'd' becomes 'w', 'M' becomes 'N'

  and so on

  Case is not changed.

  If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*/

#include <unistd.h>

int		main(int ac, char **av)
{
	int	i;
	char	letter;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			letter = av[1][i];
			if ('A' <= av[1][i] && av[1][i] <= 'Z')
				letter = 'Z' - av[1][i] + 'A';
			if ('a' <= av[1][i] && av[1][i] <= 'z')
				letter = 'z' - av[1][i] + 'a';
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
