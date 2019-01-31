/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 14:54:42 by resheva           #+#    #+#             */
/*   Updated: 2019/01/31 14:59:03 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program that displays a 'a' character on the standard output.

#include <unistd.h>

int		main(void)
{
	write(1, "a\n", 2);
	return (0);
}
