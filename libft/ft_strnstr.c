/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:10:40 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/13 14:31:49 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t c;

	c = 0;
	if (find[0] == '\0')
		return ((char *)str);
	while (*str != '\0' && len > 0)
	{
		while (find[c] != '\0' && find[c] == str[c] && len - c > 0)
			c++;
		if (find[c] == '\0')
			return ((char *)str);
		str++;
		len--;
		c = 0;
	}
	return (0);
}
