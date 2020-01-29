/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:39:46 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/22 15:46:12 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_bzero
** Place n zero-valued bytes in the area pointed to by s.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
		*(ptr++) = '\0';
}
