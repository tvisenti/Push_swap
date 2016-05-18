/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:38:32 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/18 16:55:15 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_display(t_list *lst_a, t_list *lst_b)
{
	int		i;
	t_node	*tmp_a;
	t_node	*tmp_b;

	i = 0;
	tmp_a = lst_a->head;
	if (lst_b)
		tmp_b = lst_b->head;
	printf("LST_A = \n");
	while (tmp_a)
	{
		printf("%d : %d\n", i, tmp_a->val);
		i++;
		tmp_a = tmp_a->next;
	}
	// printf("\nLST_B = \n");
	// i = 0;
	// while (tmp_b)
	// {
	// 	printf("%d : %d\n", i, tmp_b->val);
	// 	i++;
	// 	tmp_b = tmp_b->next;
	// }
}

void	ft_error()
{
	write(2, "Error\n", 6);
	exit(1);
}

t_list	 *ft_lstnew(t_list *new)
{
	new = NULL;
	if (!(new = malloc(sizeof(new))))
    	ft_error();
    if (new != NULL)
    {
        new->length = 0;
        new->head = NULL;
        new->tail = NULL;
    }
    return (new);
}

int		main(int argc, char **argv)
{
	t_list	*lst_a;
	t_list	*lst_b;
	long	nb;
	int		i;

	i = 1;
	lst_a = ft_lstnew(lst_a);
	lst_b = ft_lstnew(lst_b);
	if (argc <= 1 && !lst_a && !lst_b)
		ft_error();
	while (argc-- > 1)
	{
		nb = ft_atoi(argv[i++]);
		ft_check_double(lst_a, (int)nb);
		lst_a = lstadd(lst_a, (int)nb);
	}
	printf("========FIRST=============\n");
	ft_display(lst_a, lst_b);

	ft_lstswap_a(lst_a);
	printf("==========SWAP A==============\n");
	ft_display(lst_a, lst_b);


	ft_push_a(lst_a, lst_b);
	printf("===========PUSH A===========\n");
	ft_display(lst_a, lst_b);

	t_node	*tmp_b;
	tmp_b = lst_b->head;
	i = 0;
	while (tmp_b)
	{
		printf("%d : %d\n", i, tmp_b->val);
		i++;
		tmp_b = tmp_b->next;
	}

	return (0);
}
