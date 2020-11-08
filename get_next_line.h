/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 14:44:37 by drina             #+#    #+#             */
/*   Updated: 2020/05/23 22:14:56 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

int		get_next_line(int fd, char **line);
int		ft_strlen(char *list);
char	*ft_strdup(char *last_list);
char	*ft_strjoin(char *line, char *list);
char	*ft_strchr(char *line, int c);

#endif
