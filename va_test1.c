/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 21:54:18 by avolgin           #+#    #+#             */
/*   Updated: 2017/12/09 22:00:40 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int		sumnum(int num, ...)
{
	int		sum;
	va_list argptr;
	int		count;

	count = 0;
	sum = 0;
	va_start(argptr, num);

	while (count < num)
	{
		sum = sum + va_arg(argptr, int);
		count++;
	}
	va_end(argptr);
	return (sum);
}

int		main(int argc, char **argv)
{
	int		total;

	total = sumnum(5, 1, 2, 3, 4, 5);
	printf ("total = %d\n", total);
	return (0);

}
