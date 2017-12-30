/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 21:54:18 by avolgin           #+#    #+#             */
/*   Updated: 2017/12/09 22:08:24 by avolgin          ###   ########.fr       */
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

void	printstr(int num, ...)
{
	int		count;
	char	*str;
	va_list	argptr;

	count = 0;
	va_start(argptr, num);
	while (count < num)
	{
		str = va_arg(argptr, char *);
		printf("str = %s\n", str);
		count++;
	}
	va_end(argptr);
}

int		main(int argc, char **argv)
{
	int		total;

	total = sumnum(5, 1, 2, 3, 4, 5);
	printf ("total = %d\n", total);
	printstr(3, "one", "two", "three");
	return (0);

}
