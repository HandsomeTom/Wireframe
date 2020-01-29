/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:57:28 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/25 16:06:12 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(const char *str, const char *to_find)
{
	int c;

	c = 0;
	if (!(*to_find))
		return ((char *)str);
	while (*str)
	{
		while (str[c] != '\0' && (to_find[c] == str[c]))
			c++;
		if (to_find[c] == '\0')
			return ((char *)str);
		str++;
		c = 0;
	}
	return (NULL);
}
