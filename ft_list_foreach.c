/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resheva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 10:28:49 by resheva           #+#    #+#             */
/*   Updated: 2019/05/04 10:36:32 by resheva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	ft_list.h
 *
 *	typedef struct s_list
 *	{
 *		struct s_list *next;
 *		void		  *data;
 *	}				  t_list;
 *
 *
 */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	f(list_ptr->data);
	begin_list = begin_list->next;
}
