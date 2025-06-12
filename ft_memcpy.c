/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:49:35 by zali              #+#    #+#             */
/*   Updated: 2025/02/18 13:59:03 by zali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	size_t	i;

	i = 0;
	if (!destination && !source)
		return (destination);
	while (i < n)
	{
		((char *)destination)[i] = ((char *)source)[i];
		i++;
	}
	return (destination);
}
