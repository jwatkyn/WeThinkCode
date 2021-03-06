/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:43:50 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/24 16:55:30 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int nbr, int fd)
{
	long int		n;

	n = nbr;
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	while (n / 10 > 0)
	{
		ft_putnbr_fd(n / 10, fd);
		n %= 10;
	}
	ft_putchar_fd(n + 48, fd);
}
