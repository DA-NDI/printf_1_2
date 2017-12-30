/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_parameter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 20:21:30 by avolgin           #+#    #+#             */
/*   Updated: 2017/12/30 19:38:18 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_parse_length(char **format, t_field *parser)
{
	if (**format && (**format == 'l' || *(*format + 1)  == 'l'))
	{
		parser->length = ll; 
		*format = *format + 2;
		return ;
	}
	else if (**format && (**format == 'h' || *(*format + 1)  == 'h'))
	{
		parser->length = hh; 
		*format = *format + 2;
		return ;
	}
	else if (**format && (**format == 'h'))
		parser->length = h; 
	else if (**format && (**format == 'l'))
		parser->length = l; 
	else if (**format && (**format == 'j'))
		parser->length = j; 
	else if (**format && (**format == 'z'))
		parser->length = z; 
	else
		return ;
	(*format)++;
}

void	ft_parse_width(char **format, t_field *parser, va_list *ap)
{
	char	width[10];
	int		i;
//	va_list		ap2;

	i = 0;
	if (**format == '*')
	{
		parser->asteriks = 1;
/*
va_copy when using with dollar from parameter field
**
**		va_copy (ap2, ap); 
*/
		parser->value_width = va_arg(*ap, int);
		(*format)++;
	}
	while (**format && (ft_isdigit(**format)))
	{
		parser->width = 1;
		width[i] = **format;
		(*format)++;
	}
	parser->value_width = ft_atoi(width);
}


void	ft_parse_flags(char **format, t_field *parser)
{
	if (**format && (**format == '-' || **format == '+' || **format == ' '
		|| **format == '0' || **format == '#'))
	{
		if (**format == '-')
			parser->minus = 1;
		else if (**format == '+')
			parser->plus = 1;
		else if (**format == '\'')
			parser->apostrophe = 1;
		else if (**format == ' ')
			parser->space = 1;
		else if (**format == '0')
			parser->zero = 1;
		else if (**format == '#')
			parser->hash = 1;
		(*format)++;
		if (parser->plus == 1)
			parser->space = 0;
		if (parser->minus == 1)
			parser->zero = 0;
	}
}


void	ft_parse_precision(char **format, t_field *parser, va_list *ap)
{
	char	precision[10];
	int		i;

	i = 0;
	if (**format && (**format == '.'))
	{
		(*format)++;
		parser->precision = 1;
	}
	if (**format == '*')
	{
		parser->asteriks = 1;
		parser->value_width = va_arg(*ap, int);
		(*format)++;
	}
	while (**format && (ft_isdigit(**format)))
	{
		parser->precision = 1;
		precision[i++] = **format;
		(*format)++;
	}
	if (parser->precision && i)
		parser->value_precision = ft_atoi(precision);
}


void	ft_parse_all(char **format, t_field *parser, va_list *ap)
{
	ft_parse_flags(format, parser);
	ft_parse_width(format, parser, ap);
	ft_parse_precision(format, parser, ap);
	ft_parse_length(format, parser);
}
