/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:39:37 by tvisenti          #+#    #+#             */
/*   Updated: 2016/06/07 12:17:54 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

char				g_buf[4096];
int					g_i;

typedef struct		s_node
{
	int				val;
	struct s_node	*next;
}					t_node;

typedef struct		s_list
{
	size_t			argc;
	size_t			coup;
	struct s_node	*head;
	struct s_node	*tail;
}					t_list;

/*
**		Lib
*/

int					ps_ft_atoi(char *str);
int					ps_ft_isdigit(int c);
int					ps_ft_strlen(char *str);
char				*ps_ft_strcat(char *s1, char *s2);
t_list				*ps_ft_lstnew(void);
t_list				*ps_lstadd(t_list *lst, int value);
void				ps_ft_check_double(t_list *lst, int value);
void				ps_ft_putchar(char c);
void				ps_ft_putstr(char *str);
void				ps_ft_putnbr(int n);
void				ps_ft_free(t_list *lst_a, t_list *lst_b);

/*
**		ft_display.c
*/

void				ps_ft_error(void);
void				ps_ft_bufset(void);
void				ps_ft_buf(char *str, t_list *lst_a, t_list *lst_b);
void				ps_ft_display(t_list *lst_a, t_list *lst_b);

/*
**	ft_swap.c
*/

void				ps_ft_swap_a(t_list *lst_a, t_list *lst_b);
void				ps_ft_swap_b(t_list *lst_b, t_list *lst_a);
void				ps_ft_swap_ss(t_list *lst_a, t_list *lst_b);

/*
**	ft_push.c
*/

void				ps_ft_push_a(t_list *lst_a, t_list *lst_b);
void				ps_ft_push_b(t_list *lst_a, t_list *lst_b);

/*
**	ft_rotate.c
*/

void				ps_ft_rotate_a(t_list *lst_a, t_list *lst_b);
void				ps_ft_rotate_b(t_list *lst_b, t_list *lst_a);
void				ps_ft_rotate_rr(t_list *lst_a, t_list *lst_b);

/*
**	ft_reverse_rotate.c
*/

void				ps_ft_rev_rotate_a(t_list *lst_a, t_list *lst_b);
void				ps_ft_rev_rotate_b(t_list *lst_b, t_list *lst_a);
void				ps_ft_rev_rotate_rrr(t_list *lst_a, t_list *lst_b);

/*
**	ft_algo.c
*/

void				ps_ft_main_algo(t_list *a, t_list *b, t_node *cur);
t_node				*ps_ft_min_val(t_node *cur);
int					ps_ft_which_rotate(t_node *cur, t_node *max);

/*
** ft_check_list.c
*/

int					ps_ft_check_list_first(t_list *lst_a, t_node *back,
	t_node *front, t_list *lst_b);
int					ps_ft_check_tail(t_list *lst_a, t_list *lst_b);
int					ps_ft_check_list_croi(t_node *back, t_node *front);
int					ps_ft_check_list_decroi(t_node *back, t_node *front);
int					ps_ft_check_final(t_list *lst_a, t_list *lst_b);

#endif
