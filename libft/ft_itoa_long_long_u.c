/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_long_long_u.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 16:02:03 by avolgin           #+#    #+#             */
/*   Updated: 2018/01/31 23:19:30 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_check_min_value(char **result)
{
	char	*ret;

	if (!(ret = ft_strdup("18446744071562067968")))
	{
		ft_strdel(result);
		return (NULL);
	}
	ft_strdel(result);
	return (ret);
}

char		*ft_itoa_long_long_u(long long int n)
{
	char					*result;
	long long int			sign;
	unsigned int			i;
	unsigned long long int	a;

	a = (n + 1 == -9223372036854775807) ? 9223372036854775807 + 1 : n;
	if (!(result = ft_strnew(ft_intlen(n))))
		return (NULL);
	i = 0;
	if (a == 0)
		return (ft_strzero(result));
	if ((sign = a) < 0)
		a = -a;
	while (a > 0)
	{
		result[i] = a % 10 + '0';
		i++;
		a = a / 10;
	}
	if (sign < 0 || n + 1 == -9223372036854775807)
		result[i++] = '-';
	result[i] = '\0';
	return (n == -2147483648) ? ft_check_min_value(&result) \
	: ft_reverse(result);
}
