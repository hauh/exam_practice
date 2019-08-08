/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 23:44:08 by smorty            #+#    #+#             */
/*   Updated: 2019/08/08 23:58:04 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *dup;
	char *p;

	p = src;
	while (*p)
		++p;
	if (!(dup = (char *)malloc(sizeof(char) * (p - src + 1))))
		return (NULL);
	p = dup;
	while (*src)
		*p++ = *src++;
	*p = 0;
	return (dup);
}
