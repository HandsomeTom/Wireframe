/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:30:52 by tmaarela          #+#    #+#             */
/*   Updated: 2019/10/22 15:40:38 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_atoi
** Parses the C-string str interpreting its content as an integral
** number, which is returned as a value of type int.
*/

int		ft_atoi(const char *str)
{
	int num;
	int neg;

	neg = 1;
	num = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\r' ||
			*str == '\t' || *str == '\v' || *str == '\f'))
		str++;
	neg = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (neg * num);
}
