/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 08:25:41 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/22 17:13:40 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void				ft_bufset(void)
{
	int				n;

	n = 0;
	while (n < 4096)
	{
		g_buf[n] = '\0';
		n++;
	}
	g_i = 0;
}

void				ft_display(t_list *lst_a, t_list *lst_b)
{
	write(1, g_buf, g_i);
	if (g_bonus == 1)
	{
		ft_putchar('\n');
		ft_display_a(lst_a);
		ft_display_b(lst_b);
	}
	ft_bufset();
}

void				ft_buf(char *str, t_list *lst_a, t_list *lst_b)
{
	ft_strcpy(g_buf, str);
	if (ft_strlen(str) == 4)
		g_i++;
	g_i = g_i + 3;
	if (g_i <= 4092)
		ft_display(lst_a, lst_b);
}

void	ft_display_a(t_list *lst)
{
	t_node	*tmp;

	tmp = lst->head;
	ft_putstr("\ta : ");
	while (tmp)
	{
		ft_putnbr(tmp->val);
		ft_putchar(' ');
		tmp = tmp->next;
	}
	write(1, "\n", 2);
}

void	ft_display_b(t_list *lst)
{
	t_node	*tmp;

	tmp = lst->head;
	ft_putstr("\tb : ");
	if (!tmp)
		write(1, "\\", 1);
	while (tmp)
	{
		ft_putnbr(tmp->val);
		ft_putchar(' ');
		tmp = tmp->next;
	}
	write(1, "\n\n", 2);
}
