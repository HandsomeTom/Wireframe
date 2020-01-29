/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:53:57 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/20 20:54:30 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		nb = 147483648;
	}
	if (nb < 10 && nb >= 0)
		ft_putchar_fd(nb + '0', fd);
	else if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
		if (nb < 0)
			ft_putchar_fd('-', fd);
	}
	else
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(nb * -1, fd);
	}
}
