/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:39:37 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/18 16:54:29 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

// A EFFACER
# include <stdio.h>
// A EFFACER

typedef struct		s_list
{
	size_t			length;
	struct s_node	*tail;
	struct s_node	*head;
}					t_list;

typedef struct		s_node
{
	int				val;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;



/*
** Lib
*/

int		ft_atoi(char *str);
int		ft_isdigit(int c);
int		ft_strlen(char *str);

/*
** push_swap.c
*/

void	ft_error();
void	ft_display(t_list *lst_a, t_list *lst_b);

/*
** ft_lstadd.c
*/

t_list	 *ft_lstnew(t_list *new);
t_list	*lstadd(t_list *lst, int value);
void	ft_check_double(t_list *lst, int value);

/*
**	ft_lstswap.c
*/

void	ft_lstswap_a(t_list *lst_a);
void	ft_lstswap_b(t_list *lst_b);
void	ft_lstswap_ss(t_list *lst_a, t_list *lst_b);


/*
**	ft_push_a.c
*/

void	ft_push_a(t_list *lst_a, t_list *lst_b);

#endif
