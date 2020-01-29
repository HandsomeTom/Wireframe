/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomtom <tomtom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:03:44 by tmaarela          #+#    #+#             */
/*   Updated: 2019/12/06 12:50:04 by tomtom           ###   ########.fr       */
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

int			ft_putnbr_base(unsigned long long n, int base, int capital)
{
	unsigned long				i;
	unsigned long long			nb;
	char						*str;

	capital = (capital > 0) ? 32 : 0;
	i = ft_numlen(n, base);
	if (!(str = ft_strnew(i)))
		return (0);
	nb = n;
	while (i--)
	{
		str[i] = convert(nb % base, capital);
		nb = nb / base;
	}
	ft_putstr(str);
	free(str);
	return (ft_numlen(n, base));
}
