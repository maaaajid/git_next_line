/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 04:51:32 by aelbouaa          #+#    #+#             */
/*   Updated: 2022/11/25 17:49:08 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include<stdio.h>
# include <fcntl.h>
# include<stdlib.h>
# include <limits.h>
# include <unistd.h>

size_t	get_strlen(const char *str);
char	*getdup(char *s1);
char	*get_next_line(int fd);
int		get_strchr(const char *s, int c);
char	*get_strjoin(char *s1, char *s2);
char	*get_strdup(char *s1);

#endif
