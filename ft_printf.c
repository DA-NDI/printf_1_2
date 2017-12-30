/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 19:30:40 by avolgin           #+#    #+#             */
/*   Updated: 2017/12/30 20:27:42 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"
#include "ft_printf.h"


int		ft_check_types(char **f_copy, __attribute__((unused)) t_field *placeholder, va_list *ap)
{
	int		d;
	char	*s;

	s = (void*)0;
	d = 0;
	if (**f_copy == 'd' || **f_copy == 'i' || **f_copy == 'D')
	{
		d = va_arg(*ap, int);
		ft_putnbr(d);
		(*f_copy) += 1;
		return (1);
	}
	else if (**f_copy == 's')
	{
		s = va_arg(*ap, char *);
		(*f_copy) += 1;
		ft_putstr(s);
		return (1);
	}
	return (0);
}

void	ft_reset_tfield(t_field *field)
{
	field->minus = 0;
	field->plus = 0;
	field->space = 0;
	field->apostrophe = 0;
	field->hash = 0;
	field->asteriks = 0;
	field->parameter = 0;
	field->width = 0;
	field->precision = 0;
	field->value_width = 0;
	field->value_precision = 0;
}

int		ft_printf(char* format, ...)
{
	va_list	ap;
	va_list	ap2;
	int		d;
	char	*s;
	char	*argument;
	char	*f_copy;
	t_field placeholder;

	f_copy = format;
	s = (void*)0;
	d = 0;
	argument = ft_strchr(format, '%') + 1;
	va_start(ap, format);
	va_copy(ap2, ap);
	while (*f_copy)
	{
		if (*f_copy!= '%')
		{
			ft_putchar (*f_copy++);
			continue;
		}
		while (*++f_copy)
		{
			ft_reset_tfield(&placeholder);
			ft_parse_all(&f_copy, &placeholder, &ap);
			if (ft_check_types(&f_copy, &placeholder, &ap))
				break;
		ft_putchar (*f_copy);
		break;
		}
	}

	va_end(ap);
	return (0);
}
