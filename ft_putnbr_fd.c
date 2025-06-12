/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:53:09 by zali              #+#    #+#             */
/*   Updated: 2025/02/27 12:02:47 by zali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_total_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_pow(int n, int power)
{
	int	base;

	base = n;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (--power)
		base *= n;
	return (base);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	ln;
	int			offset;

	ln = n;
	offset = ft_pow(10, ft_total_digits(n) - 1);
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (ln < 0)
	{
		write(fd, "-", 1);
		ln *= -1;
	}
	while (offset)
	{
		ft_putchar_fd(((ln / offset) % 10) + 48, fd);
		offset = offset / 10;
	}
}
