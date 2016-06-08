/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 08:26:50 by tvisenti          #+#    #+#             */
/*   Updated: 2016/06/07 12:10:08 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list		*ps_ft_lstnew(void)
{
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (new != NULL)
	{
		new->argc = 0;
		new->coup = 0;
		new->head = NULL;
		new->tail = NULL;
	}
	return (new);
}
