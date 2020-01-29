/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:19:19 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/25 16:08:07 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	if (!(ret = ft_memalloc(ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		ret[i] = f(s[i]);
		i++;
	}
	return (ret);
}
