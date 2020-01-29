/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:19:12 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/18 16:23:11 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char	*str;
	int		i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		str = s;
		while (*str)
		{
			f(i, str);
			i++;
			str++;
		}
	}
}
