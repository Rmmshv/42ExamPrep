/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 07:08:17 by resheva           #+#    #+#             */
/*   Updated: 2019/04/30 07:11:43 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	gcd;
	int	old_a;
	int	old_b;

	gcd = 0;
	old_a = a;
	old_b = b;
	while (1)
	{
		if (a == 0)
			break;
		b %= a;
		if (b == 0)
			break;
		a %= b;
	}
	gcd = (!b) ? a : b;
	return (gcd ? (old_a / gcd * old_b) : 0);
}
