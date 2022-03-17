/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:45:37 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/16 18:40:04 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

//Part 1
int				ft_atoi(const char *str);
void			*ft_bzero(void *dest, unsigned int count);
void			*ft_calloc(unsigned int nmemb, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memccpy(void *dest, const void *src, int c, size_t num);
void			*ft_memchr(void *ptr, int value, size_t num);
void			*ft_memcpy(void *dest, const void *src, unsigned int num);
void			*ft_memmove(void *dest, const void *src, size_t num);
int				ft_memcmp(const void *buf1, const void *buf2, size_t count);
void			*ft_memset(void *dest, int value, unsigned int count);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(char *str, char *to_find, unsigned int size);
char			*ft_strrchr(const char *str, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
//Part 2
char			*ft_itoa(int num);
char			**ft_split(char *src, char sep);
char			*ft_strjoin(char const *s1, char const *s2);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd)

#endif
