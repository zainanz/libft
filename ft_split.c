/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:33:16 by zali              #+#    #+#             */
/*   Updated: 2025/02/21 09:47:06 by zali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	if (!*s)
		return (0);
	while (s[i] == c)
		i++;
	if (s[i] != c || s[i] != '\0')
		words++;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s || !s)
		return (NULL);
	lst = malloc(sizeof(char *) * (ft_count_words((char *)s, c) + 1));
	if (!lst)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		if (!ft_strchr(s, c))
			len = ft_strlen((char *)s);
		else
			len = ft_strchr(s, c) - s;
		lst[i++] = ft_substr(s, 0, len);
		s += len;
	}
	lst[i] = NULL;
	return (lst);
}
/*
#include <stdio.h>
int	main(void)
{
	char text[] = "          my work is done here.     ";
	char **strs = ft_strsplit(text, ' ');
	while (*strs)
	{
		printf("%s\n", *strs);
		strs++;
	}
}
*/
// " my work is done h."
// 5 total_words
// Allocated 6 Char *
//
