/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 22:57:58 by nle-bret          #+#    #+#             */
/*   Updated: 2016/01/09 22:58:02 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_error(void)
{
	ft_putstr("Error\n");
	exit(1);
}

int		ft_no_double(t_node *lst, int nbr)
{
	while (lst)
	{
		if (lst && nbr == lst->v->nbr)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int		ft_is_number(char *data)
{
	int		i;

	i = 0;
	while (data[i])
	{
		if (data[i] == '-')
		{
			if (!ft_isdigit(data[i + 1]))
				return (0);
			else if (ft_isdigit(data[i - 1]))
				return (0);
		}
		else if (!ft_isdigit(data[i]))
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_valid(char *argv)
{
	long long	nbr;

	nbr = ft_atoi(argv);
	if (!(nbr >= -2147483648 && nbr <= 2147483647))
		return (0);
	return (1);
}

void	ft_print_pile(t_dlist *lst)
{
	t_node	*n;

	n = lst->tail;
	ft_putchar('\n');
	while (n)
	{
		ft_putnbr(n->v->nbr);
		ft_putchar('[');
		ft_putnbr(n->v->index);
		ft_putchar(']');
		ft_putchar(' ');
		n = n->prev;
	}
}
