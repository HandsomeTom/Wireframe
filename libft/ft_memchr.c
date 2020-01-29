/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:10:03 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/23 14:36:57 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char *ret;

	ret = (unsigned char *)src;
	while (n > 0)
	{
		if (*ret == (unsigned char)c)
			return (ret);
		ret++;
		n--;
	}
	return (0);
}
