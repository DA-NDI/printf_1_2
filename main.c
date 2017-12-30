/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 20:19:06 by avolgin           #+#    #+#             */
/*   Updated: 2017/12/30 20:00:10 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>
#include <string.h>

int		main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
	int c = MAX_MULTIBYTE_LENGTH;
	ft_printf("113%-hhd, %s, 99%d", 1, "Yo", c);
	ft_printf ("\n");
	ft_printf("test1 = %s", "Yo!");

	ft_putstr("\n");
	printf("113%2d, %p, 99%d", 1, "Yo", c);
	ft_printf("113%2.3d, %p, 99%d", 1, "Yo", c);
	printf("\n");

//	printf("|%5*Q|\n");
	ft_putstr("\n");
	printf ("sizeof size_t = %lu\n", sizeof(size_t));
	printf ("sizeof int = %lu\n", sizeof(int));
	printf ("zirochka prior = |%*.*25|\n", 6, 10);
//	printf ("%s, %d\n", "Yo!", c);
/* _DATE_ current dat
** _TIME_ current time
*/
//	printf("Current time: %s",__TIME__);   
	return (0);
}
