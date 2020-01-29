/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomtom <tomtom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 14:34:35 by tmaarela          #+#    #+#             */
/*   Updated: 2019/12/08 20:08:28 by tomtom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_numlen(unsigned long long num, int base)
{
	int ret;

	ret = 1;
	while (num / base != 0)
	{
		num /= base;
		ret++;
	}
	return (ret);
}

static int	convert(unsigned long long n, int capital)
{
	if (n >= 10)
		return (n - 10 + 'a' - capital);
	else
		return (n + '0');
}

char		*ft_itoa_base(unsigned long long n, int base, int capital)
{
	int					i;
	unsigned long long	nb;
	char				*str;

	capital = (capital > 0) ? 32 : 0;
	i = ft_numlen(n, base);
	if (!(str = ft_strnew(i)))
		return (NULL);
	nb = n;
	while (i--)
	{
		str[i] = convert(nb % base, capital);
		nb = nb / base;
	}
	return (str);
}
