/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 13:22:20 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/02 14:35:39 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_numlen(long long num)
{
	int ret;

	ret = 1;
	if (num < 0)
		ret++;
	while (num / 10 != 0)
	{
		num /= 10;
		ret++;
	}
	return (ret);
}

char		*ft_itoa(long long n)
{
	int					i;
	unsigned long long	nb;
	char				*str;

	i = ft_numlen(n);
	if (!(str = ft_strnew(i)))
		return (NULL);
	if (n < 0)
		nb = n * -1;
	else
		nb = n;
	while (i--)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
