/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 02:51:14 by resheva           #+#    #+#             */
/*   Updated: 2019/02/01 03:11:18 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Write a program that takes two strings and displays, without doubles, the characters that apper in either one of the strings.

   The display will be in the order characters appear in the command line, and will be followed by a \n.

   If the number of arguments is not 2, the program displays \n.

Example:
$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	int	i;
	char	str_union[256 + 128] = {0};

	i = 0;

	while (s1[i])
	{
		if (!str_union[+s1[i]])
		{
			str_union[+s1[i]] = 1;
			write(1, &s1[i], 1);
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!str_union[+s2[i]])
		{
			str_union[+s2[i]] = 1;
			write (1, &s2[i], 1);
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
