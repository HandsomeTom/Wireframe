/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 15:15:08 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/15 15:15:05 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define COLOR_RED "\x1b[31m"
# define COLOR_GREEN "\x1b[32m"
# define COLOR_YELLOW "\x1b[33m"
# define COLOR_BLUE "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN "\x1b[36m"
# define COLOR_RESET "\x1b[0m"
# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct		s_flags
{
	int			justification;
	int			sign;
	int			hash;
	int			zero;
	int			space;
	int			width;
	int			presize;
	int			skip;
	int			str_len;
	int			spec;
	int			length;
	int			integer;
	long long	value;
	int			emptychar;
	int			neg;
}					t_flags;

int					ft_printf(const char *restrict format, ...);
t_flags				store_flags(char *str);
t_flags				store_length_spec(t_flags flags, char *str, va_list ap);
char				*store_data(va_list ap, t_flags flags);
char				*write_output(char *str, t_flags flags);

char				*func_d(int type, va_list ap);
char				*func_o(int type, va_list ap);
char				*func_x(int type, va_list ap);
char				*func_capitalx(int type, va_list ap);
char				*func_char(va_list ap);
char				*func_u(int type, va_list ap);
char				*func_f(int type, va_list ap, t_flags flags);
char				*fix_negative_sign(char *str, t_flags flags);
unsigned int		ft_numlenbase(long long num, int base);
t_flags				flags_conflict_fix(t_flags flags);
char				*store_hash(char *str, t_flags flags);
char				*ft_empty_char(char *str, t_flags flags);
int					if_str_empty(char *str);
int					neg_check(char *str);
char				*store_space(char *str);
char				*ret_stuff(char *s1, char *s2, char *s3);

#endif
