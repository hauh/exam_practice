/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 17:19:31 by smorty            #+#    #+#             */
/*   Updated: 2019/08/19 18:35:20 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*allocate(int value, int base)
{
	char	*res;
	int		size;

	size = (value < 0 ? 1 : 0);
	while (value)
	{
		value /= base;
		++size;
	}
	res = (char *)malloc(sizeof(char) * (size + 1));
	res[size] = 0;
	return (res);
}

static void	convert(char **s, int value, int base, char *letters)
{
	if (value >= base)
		convert(s, value / base, base, letters);
	**s = letters[value % base];
	++(*s);
}

char		*ft_itoa_base(int value, int base)
{
	char	*letters;
	char	*res;
	char	*p;

	if (base < 2 || base > 16 || (value < 0 && base != 10))
		return (NULL);
	letters = "0123456789ABCDEF";
	res = allocate(value, base);
	p = res;
	if (value < 0 && base == 10)
	{
		*p++ = '-';
		convert(&p, value / -10, base, letters);
		*p = value % 10 * -1 + '0';
	}
	else
		convert(&p, value, base, letters);
	return (res);
}
