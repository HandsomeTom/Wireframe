/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:03:52 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/22 15:56:38 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	char	*newstr;

	i = 0;
	while (src[i])
		i++;
	if (!(newstr = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while (src[i])
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
