/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:16:15 by resheva           #+#    #+#             */
/*   Updated: 2019/01/29 19:31:43 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Write a pogram called search_and_replace that takes 3 arguments, the first argument is a string in which to replace a letter (2nd argument).

  If the number of arhument is not 3, just display a newline.

  If the second argument is not contained in the first one (the string) then the program simply rewrites the string followed by a newline.

Examples:

$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
*/

#include <unistd.h>

int		main(int ac, char **av)
{
	int	i;

	if (ac == 4)
	{
		if (!av[2][1] && !av[3][1])
		{
			while (av[1][i])
			{
				if (av[1][i] == av[2][0])
					write(1, &av[3][0], 1);
				else 
					write(1, &av[1][i], 1);
				i++;
			}
		}	
	}
	write(1, "\n", 1);
	return (0);
}
