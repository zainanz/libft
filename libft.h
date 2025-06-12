/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 07:42:08 by zali              #+#    #+#             */
/*   Updated: 2025/04/08 15:29:34 by zali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*content;
}	t_list;

// ---------------------- Memory funcs ---------------------------
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *destination, const void *source, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memmove(void *destination, const void *source, size_t num);
// Mem - Part 2
void	*ft_calloc(size_t nmemb, size_t size);
// ----------------- String mani/info ----------------------------
int		ft_atoi(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
// Str - Part 2
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
// strcpy
size_t	ft_strlcpy(char *destination, const char *source, size_t n);
// strstr
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
// strchr
char	*ft_strrchr(const char *str, int search_str);
char	*ft_strchr(const char *str, int search_str);
// strcmp
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// strcat
size_t	ft_strlcat(char *destination, const char *source, size_t num);
// Converts int into a String
char	*ft_itoa(int n);
// --------------- is (true false) funcs --------------------
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
// List Functions
int		ft_lstsize(t_list *lst);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);

#endif
