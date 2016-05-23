/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:39:37 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/23 10:27:47 by tvisenti         ###   ########.fr       */
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

char				g_buf[4096];
int					g_i;
int					g_bonus;
int					g_argc;

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

int					ft_atoi(char *str);
int					ft_check_digit(char *str);
int					ft_isdigit(int c);
int					ft_strlen(char *str);
char				*ft_strcat(char *s1, char *s2);
t_list				*ft_lstnew(void);
t_list				*lstadd(t_list *lst, int value);
void				ft_check_double(t_list *lst, int value);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int n);

/*
**		ft_display.c
*/

void				ft_error(void);
void				ft_bufset(void);
void				ft_buf(char *str, t_list *lst_a, t_list *lst_b);
void				ft_display(t_list *lst_a, t_list *lst_b);
void				ft_display_a_b(t_list *lst_a, t_list *lst_b);

/*
**	ft_swap.c
*/

void				ft_swap_a(t_list *lst_a, t_list *lst_b);
void				ft_swap_b(t_list *lst_b, t_list *lst_a);
void				ft_swap_ss(t_list *lst_a, t_list *lst_b);

/*
**	ft_push.c
*/

void				ft_push_a(t_list *lst_a, t_list *lst_b);
void				ft_push_b(t_list *lst_a, t_list *lst_b);

/*
**	ft_rotate.c
*/

void				ft_rotate_a(t_list *lst_a, t_list *lst_b);
void				ft_rotate_b(t_list *lst_b, t_list *lst_a);
void				ft_rotate_rr(t_list *lst_a, t_list *lst_b);

/*
**	ft_reverse_rotate.c
*/

void				ft_rev_rotate_a(t_list *lst_a, t_list *lst_b);
void				ft_rev_rotate_b(t_list *lst_b, t_list *lst_a);
void				ft_rev_rotate_rrr(t_list *lst_a, t_list *lst_b);

/*
**	ft_algo.c
*/

void				ft_main_algo(t_list *a, t_list *b, t_node *cur);
t_node				*ft_min_val(t_node *cur);
int					ft_which_rotate(t_node *cur, t_node *max);

/*
** ft_check_list.c
*/

int					ft_check_list_first(t_list *lst_a, t_node *back,
	t_node *front, t_list *lst_b);
int					ft_check_tail(t_list *lst_a, t_list *lst_b);
int					ft_check_list_croi(t_node *back, t_node *front);
int					ft_check_list_decroi(t_node *back, t_node *front);
int					ft_check_final(t_list *lst_a, t_list *lst_b);

void				ft_les_bonus(t_list *lst_a, t_list *lst_b);

#endif
