/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:53:46 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/24 19:42:39 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char *newstr;
	unsigned char *newdest;

	newdest = (unsigned char *)dest;
	newstr = (unsigned char *)src;
	while (num > 0 && (src || dest))
	{
		*newdest = *newstr;
		newdest++;
		newstr++;
		num--;
	}
	return (dest);
}
