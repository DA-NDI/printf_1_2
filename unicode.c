/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unicode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 21:27:38 by avolgin           #+#    #+#             */
/*   Updated: 2017/12/21 17:36:13 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <wchar.h>

int		ft_count_bits(int z)
{
	int		i;

	i = 0;
	while (z)
	{
		z = z >> 1;
		i++;
	}
	return (i);
}

char    *ft_print_8_to_11(int c)
{
    unsigned int    11byte_mask;
    unsigned char   recover_first_6_bits;
    unsigned char   recover_last_5_bits;
    unsigned char   a;

    11byte_mask = 0xC080;
    recover_first_6_bits = (c << 26) >> 26;
    recover_last_5_bits = ((c >> 6) << 27) >> 27;
	a = (11byte_mask >> 8) | recover_last_5_bits;
	write (1, &a, 1);
	a = ((11byte_mask << 24) >> 24) | recover_rirst_6_bits;
	write (1, &a, 1);
}

int main()
{
    unsigned char   a;
    int     c;
    int     size;

    c = 15;
    size = 0;
    a = 0;
    size = ft_count_bits(c);
    printf ("size = %d\n", size);
    if (size <= 7)
    {
        a = c;
        write (1, &a, 1);
        return (0);
    }
    if (size <= 11 && size > 7)
    {
		ft_print_8_to_11(c);
		return (0);
	}
    if (size <= 16 && size > 11)
    {
		ft_print_12_to_16(c);
		return (0);
	}
	return (0);
}

