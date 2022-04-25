/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogonzale <ogonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:47:05 by ogonzale          #+#    #+#             */
/*   Updated: 2022/04/25 13:06:00 by ogonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
/*
typedef struct s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;
*/
/*
** Part 1 - Libc functions
*/

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
/*
** Extra functions
*/

int		ft_islower(int c);
int		ft_isupper(int c);

#endif
