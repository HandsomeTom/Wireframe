/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:10:20 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/25 17:07:00 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		rlen;
	int		i;
	int		c;

	i = 0;
	c = 0;
	rlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(ret = ft_memalloc(rlen)))
		return (NULL);
	while (rlen-- > 0)
	{
		while (s1[i] != '\0')
		{
			ret[i] = s1[i];
			i++;
		}
		while (s2[c] != '\0')
		{
			ret[c + i] = s2[c];
			c++;
		}
	}
	ret[i + c] = '\0';
	return (ret);
}
