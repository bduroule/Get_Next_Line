/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: beduroul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 16:14:48 by beduroul     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 19:47:07 by beduroul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 10

# include <libc.h>
# include "libft/libft.h"

typedef struct		s_lst
{
	int				fd;
	char			*string;
	struct s_lst	*next;
}					t_lst;

int					get_next_line(const int fd, char **line);

#endif
