/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlength_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 17:37:56 by tmaarela          #+#    #+#             */
/*   Updated: 2019/12/27 17:38:21 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long long	ft_numlength_base(long long num, int base)
{
	int ret;

	ret = 1;
	if (num < 0)
		ret++;
	while (num / base != 0)
	{
		num /= base;
		ret++;
	}
	return (ret);
}
