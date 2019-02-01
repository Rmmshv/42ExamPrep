/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 02:43:06 by resheva           #+#    #+#             */
/*   Updated: 2019/02/01 02:49:35 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Write a program that takes two strings and checks whether it's possible to write the first string with characters from the second string, while respecting the order in which characters appear in the second string.

  If it;s possible, the program displays the string, followed by a \n, otherwise it simply displays a \n.

  If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/

#include <unistd.h>

void	ft_putstr(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int		main(int ac, char const **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (av[2][j])
			if (av[2][j++] == av[1][i])
				i++;
		if (!av[1][i])
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
