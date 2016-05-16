/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:38:32 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/16 17:50:52 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_display(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		printf("%d : %d\n", i, lst->val);
		i++;
		lst = lst->next;
	}
}

void	ft_error()
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_check_double(t_list *lst, t_list elem)
{
	printf("1-");
	while (lst)
	{
		printf("%d vs %d", lst->val, elem.val);
		if (lst->val == elem.val)
			ft_error();
		lst = lst->next;
	}
	printf("2\n");
}

t_list		*lstnew(t_list *lst, int value)
{
	if (!lst)
	{
		lst = malloc(sizeof(t_list));
		lst->val = value;
		lst->next = NULL;
	}
	return (lst);
}

void		lstadd(t_list *lst, int value)
{
	t_list *elem;
	t_list *tmp;

	if (!((elem = malloc(sizeof(t_list)))))
		ft_error();
	elem->val = value;
	elem->next = NULL;
	if (lst == NULL)
		return ;
	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = elem;
	// ft_check_double(*lst, *elem);
}

int		main(int argc, char **argv)
{
	int		nb;
	t_list	*lst;
	int		i = 1;

	lst = NULL;
	if (argc <= 1)
		ft_error();
	while (argc-- > 1)
	{
		nb = ft_atoi(argv[i]);
		lst = lstnew(lst, nb);
		lstadd(lst, nb);
		i++;
	}
	ft_display(lst);
	return (0);
}
