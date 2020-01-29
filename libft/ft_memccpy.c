/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:04:50 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/18 16:38:31 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	unsigned char	*newstr;
	unsigned char	*newdest;
	size_t			i;

	i = 0;
	newdest = (unsigned char *)dest;
	newstr = (unsigned char *)src;
	while (i < num)
	{
		*newdest = *newstr;
		if (*newstr == (unsigned char)c)
			return (newdest + 1);
		newdest++;
		newstr++;
		i++;
	}
	return (NULL);
}
