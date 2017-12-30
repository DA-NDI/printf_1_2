/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:35:42 by avolgin           #+#    #+#             */
/*   Updated: 2017/11/06 17:47:24 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_reverse(char *s)
{
	size_t	length;
	size_t	i;
	int		c;

	i = 0;
	if (!s)
		return (NULL);
	length = ft_strlen(s) - 1;
	while (i < length)
	{
		c = s[i];
		s[i] = s[length];
		s[length] = c;
		i++;
		length--;
	}
	return (s);
}
