/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrplc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 12:04:27 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/02 12:07:17 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Replace all characters in a string with another
*/

char	*ft_strrplc(char *str, char old, char new)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == old)
			str[i] = new;
		i++;
	}
	return (str);
}
