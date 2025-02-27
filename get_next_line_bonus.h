/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfarouk <zfarouk@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:19:26 by zfarouk           #+#    #+#             */
/*   Updated: 2024/11/28 20:39:41 by zfarouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdint.h>
# include <limits.h>

# ifndef FD_SETSIZE
#  define FD_SETSIZE 1024
# endif

typedef struct s_list
{
	char			*word;
	struct s_list	*next;
}					t_list;

char				*get_next_line(int fd);
char				*rest(t_list *lst);
void				clear(t_list **lst);
char				*squeezer(t_list *lst);
int					size_lst(t_list *lst);
int					check(t_list *node);
t_list				*new_node(int fd, t_list **the_line);
void				append(t_list **lst, t_list *node);

void				make(int fd, t_list **the_line);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

#endif
