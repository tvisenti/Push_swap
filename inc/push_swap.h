/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:39:37 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/16 17:47:49 by tvisenti         ###   ########.fr       */
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
	int				val;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

/*
** Lib
*/

int		ft_atoi(char *str);
int		ft_isdigit(int c);
int		ft_strlen(char *str);

/*
** Push_swap
*/

void	ft_error();
void	lstadd(t_list *lst, int value);
void	ft_check_double(t_list *lst, t_list elem);
t_list	*lstnew(t_list *lst, int value);

#endif
