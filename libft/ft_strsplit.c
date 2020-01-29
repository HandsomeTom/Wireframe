/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 13:27:03 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/25 16:11:36 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_find_len(char *str, int i, char c)
{
	int ret;

	ret = i;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i - ret);
}

static int	ft_wc(char *s, char c)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c && (s[i + 1] != c && s[i + 1] != '\0')) ||
			(i == 0 && s[i] != c))
			ret++;
		i++;
	}
	return (ret);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		wi;
	int		fc;

	i = -1;
	j = 0;
	wi = 0;
	fc = 0;
	if (!(ret = (char **)malloc(sizeof(char **) * (ft_wc((char *)s, c) + 1))))
		return (NULL);
	while (s[++i] != '\0')
	{
		if ((s[i] == c && (s[i + 1] != c && s[i + 1] != '\0')) ||
			(i == 0 && s[i] != c))
		{
			fc = (i == 0 && s[i] != c) ? 1 : 0;
			wi = ft_find_len((char *)s, i + 1 - fc, c);
			ret[j++] = ft_strsub(s, i + 1 - fc, wi);
			fc = 0;
		}
	}
	ret[j] = NULL;
	return (ret);
}
