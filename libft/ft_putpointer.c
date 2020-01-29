/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:00:39 by tmaarela          #+#    #+#             */
/*   Updated: 2019/12/04 16:51:30 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putpointer(unsigned long long *p)
{
	ft_putstr("0x");
	return (ft_putnbr_base((unsigned long long)p, 16, 0) + 2);
}
