/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 10:52:55 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/17 14:41:31 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t len;
	char chr;

	chr = c;
	len = ft_strlen(str);
	while (len > 0)
	{
		if (str[len] == chr)
			return ((char*)(str + len))
		len--;
	}
	return (NULL);
}
