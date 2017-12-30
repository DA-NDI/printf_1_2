/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 20:21:03 by avolgin           #+#    #+#             */
/*   Updated: 2017/12/30 18:57:47 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define MAX_MULTIBYTE_LENGTH MB_CUR_MAX   // MB_CUR_MAX  -  maximum length of
									//a multibyte character in the current  locale
/* union - same as structure. but you can access and work with only one
** union element at a time. another elements will contain garbage. and you will
** rewrite every other time value of all other elements
*/ 
typedef struct s_struct
{
	unsigned int		minus :1;
	unsigned int		plus :1;
	unsigned int		space :1;
	unsigned int		zero :1;
	unsigned int		apostrophe :1;
	unsigned int		hash :1;
	unsigned int		asteriks :1;
	unsigned int		parameter: 1;
	unsigned int		width: 1;
	unsigned int		precision: 1;
	int					value_width;
	int					value_precision;
//	char		*type;
	enum			length_field
	{
		no = 0,
		hh = 1,
		h = 2,
		l = 3,
		ll = 4,
		j = 5,
		z = 6
	}					length;
}						t_field;

/* if flags in enum are power of 2. like 1 2 4 8 16 32 etc.
** you can use | for multiple flags
**  if flag1 = 1 and flag2 = 2, then int res = flag1 | flag2 == 3
**	(0000 0001 | 0000 0010) -> 0000 0011 (3)

enum			some_field
{
	flag1 = 1,
	flag2 = 2,
	flag3 = 4,
	flag5 = 8,
	flag6 = 16
};
*/
int		ft_printf(char* restrict format, ...);
void	ft_unicode(int c);
void	ft_parse_flags(char **format, t_field *parser);
//void	ft_parse_width(char **format, t_field *parser);
//void	ft_parse_precision(char **format, t_field *parser);
void	ft_parse_length(char **format, t_field *parser);
void	ft_parse_all(char **format, t_field *parser, va_list *ap);

#endif
