/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_long_long_u.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 16:02:03 by avolgin           #+#    #+#             */
/*   Updated: 2018/02/06 12:00:21 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
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
*/
char		*ft_itoa_long_long_u(unsigned long long int ui)
{
	
	/* char					*result; */
	/* long long int			sign; */
	/* unsigned int			i; */
	/* unsigned long long int	a; */

	/* a = (n + 1 == -9223372036854775807) ? 9223372036854775807 + 1 : n; */
	/* if (!(result = ft_strnew(ft_intlen(n)))) */
	/* 	return (NULL); */
	/* i = 0; */
	/* if (a == 0) */
	/* 	return (ft_strzero(result)); */
	/* if ((sign = a) < 0) */
	/* 	a = -a; */
	/* while (a > 0) */
	/* { */
	/* 	result[i] = a % 10 + '0'; */
	/* 	i++; */
	/* 	a = a / 10; */
	/* } */
	/* if (sign < 0 || n + 1 == -9223372036854775807) */
	/* 	result[i++] = '-'; */
	/* result[i] = '\0'; */
	/* if (n == -1) */
	/* 	return (ft_strdup("18446744073709551615")); */
	/* return (n == -2147483648) ? ft_check_min_value(&result) \ */
	/* : ft_reverse(result); */
    unsigned long long int        tmpn;
    unsigned long long int        len;
    char                        *str;

    tmpn = ui;
    len = 2;
    while (tmpn /= 10)
        len++;
    if ((str = (char*)malloc(sizeof(char) * len)) == NULL)
        return (NULL);
    str[--len] = '\0';
    while (len--)
    {
        str[len] = ui % 10 + '0';
        ui = ui / 10;
    }
    return (str);
}
