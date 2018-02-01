/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 18:50:02 by avolgin           #+#    #+#             */
/*   Updated: 2018/01/30 18:50:08 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <locale.h>
#include <stddef.h>
#include "ft_printf.h"

int		main(void)
{
	FILE	*printf_, *printf_ret, *ft_printf_ret;
	int		ret1;
	int		ret2;

	printf_ = fopen("./file_m53_del", "w");
	printf_ret = fopen("./file_m53_del", "w");
	ft_printf_ret = fopen("./file_m53_del", "w");
	setvbuf(printf_, NULL, _IONBF, 0);
	setvbuf(printf_ret, NULL, _IONBF, 0);
	setvbuf(ft_printf_ret, NULL, _IONBF, 0);
	ft_printf("\n#0063");
	fprintf(printf_, "\n#0063");
	ret1 = fprintf(printf_, "|%c|", 0);
	ret2 = ft_printf("|%c|", 0);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1)
	{
		printf_ = fopen("./file_m53_del", "a");
		setvbuf(printf_, NULL, _IONBF, 0);
	}
}
