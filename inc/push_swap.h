/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:39:37 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/20 09:28:02 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

/*
**	A EFFACER
*/

# include <stdio.h>

typedef struct		s_node
{
	int				val;
	struct s_node	*next;
}					t_node;

typedef struct		s_list
{
	size_t			length;
	struct s_node	*head;
	struct s_node	*tail;
}					t_list;

/*
**		Lib
*/

int					ft_atoi(char *str);
int					ft_check_digit(char *str);
int					ft_isdigit(int c);
int					ft_strlen(char *str);
t_list				*ft_lstnew(void);
t_list				*lstadd(t_list *lst, int value);
void				ft_check_double(t_list *lst, int value);

/*
**		ft_display.c
*/

void				ft_manage_display(t_list *lst_a, t_list *lst_b);
void				ft_error();
void				ft_display(t_list *lst_a, t_list *lst_b);
void				ft_display_a(t_list *lst_a);
void				ft_display_b(t_list *lst_b);

/*
**	ft_swap.c
*/

void				ft_swap_a(t_list *lst_a);
void				ft_swap_b(t_list *lst_b);
void				ft_swap_ss(t_list *lst_a, t_list *lst_b);

/*
**	ft_push.c
*/

void				ft_push_a(t_list *lst_a, t_list *lst_b);
void				ft_push_b(t_list *lst_a, t_list *lst_b);

/*
**	ft_rotate.c
*/

void				ft_rotate_a(t_list *lst_a);
void				ft_rotate_b(t_list *lst_b);
void				ft_rotate_rr(t_list *lst_a, t_list *lst_b);

/*
**	ft_reverse_rotate.c
*/

void				ft_rev_rotate_a(t_list *lst_a);
void				ft_rev_rotate_b(t_list *lst_b);
void				ft_rev_rotate_rrr(t_list *lst_a, t_list *lst_b);

#endif
