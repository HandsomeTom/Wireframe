/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:57:47 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/24 19:40:12 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_isalnum
** Check if the ascii value of c is either alphabetic or numeric
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	if (ft_isalpha(c))
		return (1);
	if (ft_isdigit(c))
		return (1);
	return (0);
}
