/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 14:18:26 by resheva           #+#    #+#             */
/*   Updated: 2019/01/31 14:45:18 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  Write a program that displays a 'a' character on the standard output.
#include <unistd.h>

int		main()
{
	write(1, "z", 1);
	return(0);
}
