/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 13:07:57 by avolgin           #+#    #+#             */
/*   Updated: 2018/01/20 20:40:05 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define MINPLUS(x) ((x) < 0 ? -(x) : (x))

static void	print_base(int value, int base, char *s, int *i)
{
	char	*str;

	str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if (value <= -base || base <= value)
		print_base(value / base, base, s, i);
	s[(*i)++] = str[MINPLUS(value % base)];
}

char		*ft_itoa_base(int value, int base)
{
	char	*s;
	int		i;

	i = 0;
	if (base < 2 || base > 36 || !(s = (char*)malloc(sizeof(char))))
		return (void*)0;
	if (value < 0)
		s[i++] = '-';
	print_base(value, base, s, &i);
	s[i] = '\0';
	return (s);
}
