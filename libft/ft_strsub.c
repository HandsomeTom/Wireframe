/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:05:44 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/02 16:42:35 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		rlen;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	rlen = len + 1;
	if (!(ret = ft_memalloc(rlen)))
		return (NULL);
	while (len-- > 0)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
