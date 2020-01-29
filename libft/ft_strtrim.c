/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomtom <tomtom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:57:04 by tmaarela          #+#    #+#             */
/*   Updated: 2019/12/06 12:48:25 by tomtom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		c;
	int		i;
	char	*ret;

	if (!s)
		return (NULL);
	i = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	c = ft_strlen(s) - 1;
	if (i > c)
	{
		if (!(ret = ft_memalloc(1)))
			return (NULL);
		*ret = '\0';
		return (ret);
	}
	while (s[c] == ' ' || s[c] == '\t' || s[c] == '\n' || s[c] == '\0')
		c--;
	ret = ft_strsub(s, i, c - i + 1);
	return (ret);
}
