/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:45:37 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/15 14:56:09 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str);
void	*ft_bzero(void *dest, unsigned int count);
void	*ft_calloc(size_t nmemb, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memccpy(void *dest, const void *src, int c, unsigned int num);
void	*memchr(void *ptr, int value, unsigned int num);
void	*ft_memcpy(void *dest, const void *src, unsigned int num);
void	*ft_memmove(void *dest, const void *src, unsigned int num);
void	*ft_memset(void *dest, int value, unsigned int count);
char	**ft_split(char *src, char *charset);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(char *str, char *to_find, unsigned int size);
char	*ft_strrchr(const char *str, int c);
int	ft_tolower(int c)
int	ft_toupper(int c);
