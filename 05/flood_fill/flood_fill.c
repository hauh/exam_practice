/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:36:59 by smorty            #+#    #+#             */
/*   Updated: 2019/08/19 21:55:07 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	flood_fill(char **tab, t_point size, t_point begin)
{
	t_point	next;
	char	c;

	c = tab[begin.y][begin.x];
	tab[begin.y][begin.x] = 'F';
	if (begin.y + 1 < size.y && tab[begin.y + 1][begin.x] == c)
	{
		next.y = begin.y + 1;
		next.x = begin.x;
		flood_fill(tab, size, next);
	}
	if (begin.y - 1 >= 0 && tab[begin.y - 1][begin.x] == c)
	{
		next.y = begin.y - 1;
		next.x = begin.x;
		flood_fill(tab, size, next);
	}
	if (begin.x + 1 < size.x && tab[begin.y][begin.x + 1] == c)
	{
		next.y = begin.y;
		next.x = begin.x + 1;
		flood_fill(tab, size, next);
	}
	if (begin.x - 1 >= 0 && tab[begin.y][begin.x - 1] == c)
	{
		next.y = begin.y;
		next.x = begin.x - 1;
		flood_fill(tab, size, next);
	}
}
