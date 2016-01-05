/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_ft_push_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 11:03:52 by nle-bret          #+#    #+#             */
/*   Updated: 2016/01/04 11:03:54 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist		*dlist_push_back(t_dlist *list, int nbr)
{
	t_node	*n;

	if (list)
	{
		n = (t_node*)malloc(sizeof(t_node));
		if (n)
		{
			n->v = nbr;
			n->next = NULL;
			if (!list->tail)
			{
				n->prev = NULL;
				list->tail = n;
				list->head = n;
			}
			else
			{
				list->tail->next = n;
				n->prev = list->tail;
				list->tail = n; 
			}
			list->len++;
		}
	}
	return (list);
}