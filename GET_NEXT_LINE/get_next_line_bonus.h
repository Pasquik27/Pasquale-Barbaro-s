/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbarbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:07:18 by pbarbaro          #+#    #+#             */
/*   Updated: 2021/02/04 17:07:21 by pbarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

int				get_next_line(int fd, char **line);
char			*ft_strchr(const char *str, int c);
size_t			ft_strlen(const char *str);
unsigned int	ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
char			*ft_strjoin(char const *str1, char const *str2);
char			*ft_strdup(const char *str);
int				ft_reading(char **end_line, char **buffer,
					int fd, int b_size);
int				ft_result(char **end_line, char **buffer);

#endif
