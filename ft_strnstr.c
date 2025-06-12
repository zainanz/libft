/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:09:39 by zali              #+#    #+#             */
/*   Updated: 2025/04/08 13:02:23 by zali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str1;
	char	*str2;

	i = 0;
	j = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if ((!str1 || !str2) && len == 0)
		return (NULL);
	if (!*str2)
		return (str1);
	while (str1[i])
	{
		j = 0;
		while (str2[j] && str1[i + j] == str2[j] && (i + j) < len)
			j++;
		if (str2[j] == 0)
			return (&str1[i]);
		i++;
	}
	return (0);
}
