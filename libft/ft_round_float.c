/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 16:25:18 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/11 16:25:21 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long double			ft_round(long double num, int prec)
{
	long double rv;

	rv = (long double)1 / 2;
	while (prec-- > 0)
		rv /= 10;
	num += rv;
	return (num);
}
