/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_to_string.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:33:19 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/13 17:17:06 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_pointer_to_string(void *pointer)
{
	char				*ps;
	char				*tmp;
	unsigned long long	p;

	p = (unsigned long long)pointer;
	if (p == 0)
	{
		ps = ft_strjoin("", "0x0");
		return (ps);
	}
	tmp = ft_itoa_base((unsigned long long)p, 16, 0);
	ps = ft_strjoin("0x", tmp);
	free(tmp);
	return (ps);
}
