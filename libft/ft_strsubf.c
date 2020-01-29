/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:53:41 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/13 15:59:41 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strsubf(char *s, unsigned int start, size_t len)
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
	free(s);
	return (ret);
}
