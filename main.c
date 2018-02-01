/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 20:19:06 by avolgin           #+#    #+#             */
/*   Updated: 2018/02/01 03:07:16 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>
#include <string.h>

int		main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
//	int c = MAX_MULTIBYTE_LENGTH;
/*	ft_printf("113%-hhd, %s, 99%d", 1, "Yo", c);
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
//	printf ("zirochka prior = |%*.*25|\n", 6, 10);
	ft_printf("test2 = %hhd\n", -256);
	printf("test2 printf = %d\n", 1);
	ft_printf("test2 printf = %d\n", 1);
	ft_printf("ft_printf = %d\n", 4242);
	printf("printf = %d\n", 4242);
	ft_printf("ft_printf = %hd\n", 32767);
	printf("printf = %hd\n", 32767);
	ft_printf("% ld\n", 2147483648);
	printf("% ld\n", 2147483648); */
//	long long a = 18446744073709551615;
//	a -= 1;
//	ft_printf("%llud\n", a);

printf("%1.5d\n", -12345);
ft_printf("%1.5d\n", -12345);
 	printf ("return value printf = %d\n", printf("%5d\n", -42));
 	printf ("return value ft_printf = %d\n", ft_printf("%5d\n", -42));
 	printf ("return value printf = %d\n", printf("%10.5d", 4242));
 	printf ("return value ft_printf = %d\n", ft_printf("%10.5d", 4242));
 	printf ("return value printf = %d\n", printf("%0+5d", 42));
 	printf ("return value ft_printf = %d\n", ft_printf("%0+5d", 42));
 	printf ("return value printf = %d\n", printf("%5d", -42));
	printf ("return value ft_printf = %d\n", ft_printf("%5d", -42));
	printf ("return value printf = %d\n", printf("|%06.d|", -1));
	printf ("return value ft_printf = %d\n", ft_printf("|%06.d|", -1));
	printf ("return value printf = %d\n", printf("|%05.d|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%05.d|", 0));
	printf ("return value printf = %d\n", printf("|%+05d|",0));
	printf ("return value ft_printf = %d\n", ft_printf("|%+05d|",0));
	printf ("return value printf = %d\n", printf("|%06.2d|",-2));
	printf ("return value ft_printf = %d\n", ft_printf("|%06.2d|",-2));
	printf ("return value printf = %d\n", printf("|% 0.d|",0));
	printf ("return value ft_printf = %d\n", ft_printf("|% 0.d|",0));
	printf ("return value printf = %d\n", printf("|%lld|", LLONG_MAX));
	printf ("return value ft_printf = %d\n", ft_printf("|%lld|", LLONG_MAX));
	printf ("return value printf = %d\n", printf("|% #5hhd|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|% #5hhd|", 0));
	printf ("return value printf = %d\n", printf("|%u|", 4294967295));
	printf ("return value ft_printf = %d\n", ft_printf("|%u|", 4294967295));
	printf ("return value printf = %d\n", printf("|% 0+--13.12lld|", -2147483648));
	printf ("return value ft_printf = %d\n", ft_printf("|% 0+--13.12lld|", -2147483648));
	printf ("return value printf = %d\n", printf("|% +5jd|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|% +5jd|", 0));
	printf ("return value printf = %d\n", printf("|%lld|", -9223372036854775808));
	printf ("return value ft_printf = %d\n", ft_printf("|%lld|", -9223372036854775808));
	printf ("return value printf = %d\n", printf("|%.0%|"));
	printf ("return value ft_printf = %d\n", ft_printf("|%.0%|"));
	printf ("return value printf = %d\n", printf("|%-2.0%|"));
	printf ("return value ft_printf = %d\n", ft_printf("|%-2.0%|"));
	printf ("return value printf = %d\n", printf("|%+2.%|"));
	printf ("return value ft_printf = %d\n", ft_printf("|%+2.%|"));
	printf ("return value printf = %d\n", printf("%5d", 42));

	printf ("return value printf = %d\n", printf("%lld", 9223372036854775807));
	printf ("return value ft_printf = %d\n", ft_printf("%lld", 9223372036854775807));
	printf ("return value printf = %d\n", printf("%+5hhd", 0));
	printf ("return value ft_printf = %d\n", ft_printf("%+5hhd", 0));
	printf ("return value printf = %d\n", printf("%%", 0));
	printf ("return value ft_printf = %d\n", ft_printf("%%", 0));
	printf ("return value printf = %d\n", printf("% %", 0));
	printf ("return value ft_printf = %d\n", ft_printf("% %", 0));
	printf ("return value printf = %d\n", printf("%2%", 0));
	printf ("return value ft_printf = %d\n", ft_printf("%2%", 0));
	printf ("return value printf = %d\n", printf("% 2%", 0));
	printf ("return value ft_printf = %d\n", ft_printf("% 2%", 0));
	printf ("return value printf = %d\n", printf("% 2.%", 0));
	printf ("return value ft_printf = %d\n", ft_printf("% 2.%", 0));
	printf ("return value printf = %d\n", printf("% 2.1%", 0));
	printf ("return value ft_printf = %d\n", ft_printf("% 2.1%", 0));
	printf ("return value printf = %d\n", printf("% 2.3%", 0));
	printf ("return value ft_printf = %d\n", ft_printf("% 2.3%", 0));
	printf ("return value printf = %d\n", printf("% +02%", 0));
	printf ("return value ft_printf = %d\n", ft_printf("% +02%", 0));
	printf ("return value printf = %d\n", printf("% -%", 0));
	printf ("return value ft_printf = %d\n", ft_printf("% -%", 0));
	printf ("return value printf = %d\n", printf("%02.0%", 0));
	printf ("return value ft_printf = %d\n", ft_printf("%02.0%", 0));
	printf ("return value printf = %d\n", printf("%02.0%", 0));
	printf ("return value ft_printf = %d\n", ft_printf("%02.0%", 0));
	printf ("return value printf = %d\n", printf("% 05d", 1));
	printf ("return value ft_printf = %d\n", ft_printf("% 05d", 1));
	printf ("return value printf = %d\n", printf("|%0.0d|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%0.0d|", 0));
	printf ("return value printf = %d\n", printf("|%.5o|", 12));
	printf ("return value ft_printf = %d\n", ft_printf("|%.5o|", 12));
	printf ("return value printf = %d\n", printf("|% 05d|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|% 05d|", 0));
	printf ("return value printf = %d\n", printf("|% 05o|", 5));
	printf ("return value ft_printf = %d\n", ft_printf("|% 05o|", 5));
	printf ("return value printf = %d\n", printf("|%.0o|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%.0o|", 0));
	printf ("return value printf = %d\n", printf("|%#.0o|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%#.0o|", 0));
	printf ("return value printf = %d\n", printf("|%.Lo|", -256));
	printf ("return value ft_printf = %d\n", ft_printf("|%.Lo|", -256));
	printf ("return value printf = %d\n", printf("|%#.4o|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%#.4o|", 0));
	printf ("return value printf = %d\n", printf("|%#.4o|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%#.4o|", 0));
	printf ("return value printf = %d\n", printf("|%+#5jo|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%+#5jo|", 0));
	printf ("return value printf = %d\n", printf("|%#5o|", 22));
	printf ("return value ft_printf = %d\n", ft_printf("|%#5o|", 22));
	printf ("return value printf = %d\n", printf("|%#5.4o|", -25));
	printf ("return value ft_printf = %d\n", ft_printf("|%#5.4o|", -25));
	printf ("return value printf = %d\n", printf("|%-5.3hho|", -25));
	printf ("return value ft_printf = %d\n", ft_printf("|%-5.3hho|", -25));
	printf ("return value printf = %d\n", printf("|%lo|", -2147483648));
	printf ("return value ft_printf = %d\n", ft_printf("|%lo|", -2147483648));
	printf ("return value printf = %d\n", printf("|%-5lo|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%-5lo|", 0));
 	printf ("return value printf = %d\n", printf("|%lo|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%lo|", 0));
	 int k = 0;
	 k = 0;
	printf ("return value printf = %d\n", printf("|%Lo|", &k));
	printf ("return value ft_printf = %d\n", ft_printf("|%Lo|", &k));
	printf ("return value printf = %d\n", printf("|%5.4u|", -25));
	printf ("return value ft_printf = %d\n", ft_printf("|%5.4u|", -25));
	printf ("return value printf = %d\n", printf("|%u|", -2147483648));
	printf ("return value ft_printf = %d\n", ft_printf("|%u|", -2147483648));
	printf ("return value printf = %d\n", printf("|%lu|", -2147483648));
	printf ("return value ft_printf = %d\n", ft_printf("|%lu|", -2147483648));
	printf ("return value printf = %d\n", printf("|%hhO|", -25));
	printf ("return value ft_printf = %d\n", ft_printf("|%hhO|", -25));
	printf ("return value printf = %d\n", printf("|%hho|", -25));
	printf ("return value ft_printf = %d\n", ft_printf("|%hho|", -25));
	printf ("return value printf = %d\n", printf("|%0#5.3x|", 25));
	printf ("return value ft_printf = %d\n", ft_printf("|%0#5.3x|", 25));
	printf ("return value printf = %d\n", printf("|%5.4hu|", -25));
	printf ("return value ft_printf = %d\n", ft_printf("|%5.4hu|", -25));
	printf ("return value printf = %d\n", printf("|%u|", -25, &k));
	printf ("return value ft_printf = %d\n", ft_printf("|%u|", -25, &k));
	printf ("return value printf = %d\n", printf("%lu", -42));
	printf ("return value ft_printf = %d\n", ft_printf("%lu", -42));
	printf ("return value printf = %d\n", printf("|%#08x|", 42));
	printf ("return value ft_printf = %d\n", ft_printf("|%#08x|", 42));
	printf ("return value printf = %d\n", printf("|%#8x|", 42));
	printf ("return value ft_printf = %d\n", ft_printf("|%#8x|", 42));
	printf ("return value printf = %d\n", printf("|%#8.9x|", 42));
	printf ("return value ft_printf = %d\n", ft_printf("|%#8.9x|", 42));
	printf ("return value printf = %d\n", printf("|%#09x|", 9));
	printf ("return value ft_printf = %d\n", ft_printf("|%#09x|", 9));
	printf ("return value printf = %d\n", printf("|%#08x|", 8));
	printf ("return value ft_printf = %d\n", ft_printf("|%#08x|", 8));
	printf ("return value printf = %d\n", printf("|%#07x|", 7));
	printf ("return value ft_printf = %d\n", ft_printf("|%#07x|", 7));
	printf ("return value printf = %d\n", printf("|%#06x|", 6));
	printf ("return value ft_printf = %d\n", ft_printf("|%#06x|", 6));
	printf ("return value printf = %d\n", printf("|%#05x|", 5));
	printf ("return value ft_printf = %d\n", ft_printf("|%#05x|", 5));
	printf ("return value printf = %d\n", printf("|%#04x|", 4));
	printf ("return value ft_printf = %d\n", ft_printf("|%#04x|", 4));
	printf ("return value printf = %d\n", printf("|%#03x|", 3));
	printf ("return value ft_printf = %d\n", ft_printf("|%#03x|", 3));
	printf ("return value printf = %d\n", printf("|%#02x|", 2));
	printf ("return value ft_printf = %d\n", ft_printf("|%#02x|", 2));
	printf ("return value printf = %d\n", printf("|%#01x|", 1));
	printf ("return value ft_printf = %d\n", ft_printf("|%#01x|", 1));
	printf ("return value printf = %d\n", printf("|%#00x|", 1));
	printf ("return value ft_printf = %d\n", ft_printf("|%#00x|", 1));
	printf ("return value printf = %d\n", printf("|%#00x|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%#00x|", 0));
	printf ("return value printf = %d\n", printf("|%#04x|", 1));
	printf ("return value ft_printf = %d\n", ft_printf("|%#04x|", 1));
	printf ("return value printf = %d\n", printf("|%05x|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%05x|", 0));
	printf ("return value printf = %d\n", printf("|%06.5c|", 122));
	printf ("return value printf = %d\n", printf("|%06.5c|", 122));
	printf ("return value ft_printf = %d\n", ft_printf("|%0c|", '\0'));
	printf ("return value ft_printf = %d\n", ft_printf("|%0c|", '\0'));
	printf ("return value ft_printf = %d\n", ft_printf("|%c|", '\0'));
	printf ("return value ft_printf = %d\n", ft_printf("|%c|", '\0'));
	printf ("return value printf = %d\n", printf("|%06.5c|", '\0'));
	printf ("return value ft_printf = %d\n", ft_printf("|%06.5c|", '\0'));
	printf ("return value printf = %d\n", printf("|%c|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%c|", 0));
	printf ("return value printf = %d\n", printf("|%s|", "Helllo"));
	printf ("return value ft_printf = %d\n", ft_printf("|%s|", "Helllo"));
	printf ("return value printf = %d\n", printf("|%s|", NULL));
	printf ("return value ft_printf = %d\n", ft_printf("|%s|", NULL));
	printf ("return value printf = %d\n", printf("|%.3s|", NULL));
	printf ("return value ft_printf = %d\n", ft_printf("|%.3s|", NULL));
	printf ("return value printf = %d\n", printf("|%03.1s|", L""));
	printf ("return value ft_printf = %d\n", ft_printf("|%03.1s|", L""));
	printf("stand = |%lc|\n", 0);
	ft_printf("my = |%lc|\n", 0);
	printf ("return value printf = %d\n", printf("|%2.1s|", L"cas"));
	printf ("return value ft_printf = %d\n", ft_printf("|%2.1s|", L"cas"));
	printf ("return value printf = %d\n", printf("|%02.5s|", L"cas"));
	printf ("return value ft_printf = %d\n", ft_printf("|%02.5s|", L"cas"));
	printf ("return value printf = %d\n", printf("|%02.5s|", L"cas"));
	printf ("return value ft_printf = %d\n", ft_printf("|%02.5s|", L"cas"));
	printf ("return value printf = %d\n", printf("|%02.5s|", "\0"));
	printf ("return value ft_printf = %d\n", ft_printf("|%02.5s|", "\0"));
 	printf ("return value printf = %d\n", printf("|%02.1s|", "string"));
	printf ("return value ft_printf = %d\n", ft_printf("|%02.1s|", "string"));
 	printf ("return value printf = %d\n", printf("|%ls|", L""));
	printf ("return value ft_printf = %d\n", ft_printf("|%ls|", L""));
 	printf ("return value printf = %d\n", printf("|%s|", L""));
	printf ("return value ft_printf = %d\n", ft_printf("|%s|", L""));
 	printf ("return value printf = %d\n", printf("|%lc|", 129));
	printf ("return value ft_printf = %d\n", ft_printf("|%lc|", 129));
 	printf ("return value printf = %d\n", printf("|%6.4lc|", 260));
	printf ("return value ft_printf = %d\n", ft_printf("|%6.4lc|", 260));
 	printf ("return value printf = %d\n", printf("|% +.0C|", L'V'));
	printf ("return value ft_printf = %d\n", ft_printf("|% +.0C|", L'V'));
	printf ("return value printf = %d\n", printf("|%2.lc|", 129));
	printf ("return value ft_printf = %d\n", ft_printf("|%2.lc|", 129));
	printf ("return value printf = %d\n", printf("|%2.C|", 129));
	printf ("return value ft_printf = %d\n", ft_printf("|%2.C|", 129));
	printf ("return value printf = %d\n", printf("|%2.S|", L"cas"));
	printf ("return value ft_printf = %d\n", ft_printf("|%2.S|", L"cas"));
	printf ("return value printf = %d\n", printf("|%s|", L""));
	printf ("return value ft_printf = %d\n", ft_printf("|%s|", L""));
	printf ("return value printf = %d\n", printf("|%ls|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%ls|", 0));
//	printf ("return value printf = %d\n", printf("|%.3ls|", NULL));
//	printf ("return value ft_printf = %d\n", ft_printf("|%.3ls|", NULL));
	printf ("return value printf = %d\n", printf("|%.3lv|"));
	printf ("return value ft_printf = %d\n", ft_printf("|%.3lv|"));
//	printf ("return value printf = %d\n", printf("|%ls|", NULL));
//	printf ("return value ft_printf = %d\n", ft_printf("|%ls|", NULL));
	int p;
	printf ("return value printf = %d\n", printf("|%5p|", &p));
	printf ("return value ft_printf = %d\n", ft_printf("|%5p|", &p));
	printf ("return value printf = %d\n", printf("|%015p|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%015p|", 0));
	printf ("return value printf = %d\n", printf("|%#015x|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%#015x|", 0));
	printf ("return val printf = %d\n", printf("|%.2s is a string|", "this"));
	printf ("return value printf = %d\n", printf("|%2c|", 0));
	printf ("return value ft_printf = %d\n", ft_printf("|%2c|", 0));
	ft_printf("%05c\n", 0);
	ft_printf("%5c\n", 42);
	ft_printf("%-5c\n", 42);
	printf ("return value printf = %d\n", printf("%2c\n", 0));
	printf ("return value ft_printf = %d\n", ft_printf("%2c\n", 0));
	printf ("return value printf = %d\n", printf("%lu", -42));
	printf ("return value ft_printf = %d\n", ft_printf("%lu", -42));
	ft_printf ("%lu", -42);


/* _DATE_ current dat
** _TIME_ current time
*/
//	printf("Current time: %s",__TIME__);   
	return (0);
}
