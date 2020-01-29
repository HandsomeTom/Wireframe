/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:48:24 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/16 13:56:50 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int len;

	len = ft_strlen(str);
	while (len != 0 && str[len] != (char)c)
		len--;
	if (str[len] == (char)c)
		return ((char *)&str[len]);
	return (0);
}
