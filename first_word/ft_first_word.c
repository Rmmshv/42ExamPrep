/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:32:40 by resheva           #+#    #+#             */
/*   Updated: 2019/01/28 16:01:55 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 *Write a program that takes a string and displays its first word, followed by a newline.

 A word is a section of string delimited by spaces/tabs or by the start/end of the strinf.

 If the number of parameters is not 1, or if there are no words, simply display a newline.

 Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h>

void	ft_first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_first_word(av[1]);
		return (0);
	}
	else
		write(1, "\n", 1);
	return (0);
}
