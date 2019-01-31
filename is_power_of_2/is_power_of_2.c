/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 17:53:25 by resheva           #+#    #+#             */
/*   Updated: 2019/01/30 17:57:11 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Write a function that determines if a given number is a power of 2.

  This function returns 1 if the given number is a power of 2, otherwise it returns 0.

  Your function must be declared as follows:

  int		is_power_of_2(unsigned int n);
*/

int		is_power_of_2(unsigned int n)
{
	return ((n & (-n)) == n ? 1 : 0);
}
