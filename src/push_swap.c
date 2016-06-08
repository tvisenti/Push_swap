/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:38:32 by tvisenti          #+#    #+#             */
/*   Updated: 2016/06/07 12:13:39 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include <stdio.h>

void	ps_ft_free(t_list *lst_a, t_list *lst_b)
{
	t_node *tmp;
	t_node *elem;

	tmp = lst_a->head;
	elem = lst_a->head->next;
	while (elem)
	{
		free(tmp);
		tmp = elem;
		elem = elem->next;
	}
	free(tmp);
	free(lst_b);
}

/*
** 	void	ps_affichage(t_list *lst)
** 	{
** 		t_node *elem;
** 		elem = lst->head;
** 		while (elem->next != NULL)
** 		{
** 			printf("%d, ", elem->val);
** 			elem = elem->next;
** 		}
** 		printf("%d\n", elem->val);
** 	}
*/

int		main(int argc, char **argv)
{
	t_list	*lst_a;
	t_list	*lst_b;
	long	nb;
	int		i;

	i = 1;
	ps_ft_bufset();
	lst_a = ps_ft_lstnew();
	lst_b = ps_ft_lstnew();
	if (argc < 1 || !lst_a || !lst_b)
		ps_ft_error();
	if (argc == 1)
		return (0);
	while (argc-- > 1)
	{
		nb = ps_ft_atoi(argv[i++]);
		ps_ft_check_double(lst_a, (int)nb);
		lst_a = ps_lstadd(lst_a, (int)nb);
	}
	ps_ft_main_algo(lst_a, lst_b, lst_a->head);
	if (g_i > 0)
		ps_ft_display(lst_a, lst_b);
	ps_ft_free(lst_a, lst_b);
	return (0);
}
