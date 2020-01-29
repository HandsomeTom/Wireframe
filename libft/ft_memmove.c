/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:18:37 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/24 19:43:57 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*newsrc;
	unsigned char	*newdest;

	i = 0;
	if (!src && !dest)
		return (NULL);
	newsrc = (unsigned char *)src;
	newdest = (unsigned char *)dest;
	if (newdest > newsrc)
		while (++i <= n)
			newdest[n - i] = newsrc[n - i];
	else
		while (n-- > 0)
			*newdest++ = *newsrc++;
	return (dest);
}
