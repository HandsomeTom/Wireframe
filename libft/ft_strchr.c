/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:22:40 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/18 17:11:09 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char *ret;

	ret = (char *)str;
	while (*ret)
	{
		if (*ret == c)
			return (ret);
		ret++;
	}
	if (*ret == '\0' && c == '\0')
		return (ret);
	return (0);
}
