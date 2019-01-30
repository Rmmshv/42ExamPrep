/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 14:55:43 by resheva           #+#    #+#             */
/*   Updated: 2019/01/30 15:17:35 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Write a function that converts the dtring argument str to an integer (type int)
  and returns it.

  It works much like the standart atoi(const char *str) functon, see the man.

  Your function must be declared as follows:

  int		ft_atoi(const char *str);
*/

int		ft_atoi(char *str)
{
	int	i;
	int nbr;
	int	sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sign);
}
