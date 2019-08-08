/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 00:23:47 by smorty            #+#    #+#             */
/*   Updated: 2019/08/09 00:37:31 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	was_before(char *p0, char *p1, char c)
{
	while (p0 != p1)
		if (*p0++ == c)
			return (1);
	return (0);
}

int			main(int argc, char **argv)
{
	char *p0;
	char *p1;

	if (argc == 3)
	{
		p0 = *(++argv);
		while (*p0)
		{
			if (!was_before(*argv, p0, *p0))
				write(1, p0, 1);
			++p0;
		}
		p1 = *(argv + 1);
		while (*p1)
		{
			if (!was_before(*argv, p0, *p1) && !was_before(*(argv + 1), p1, *p1))
				write(1, p1, 1);
			++p1;
		}
	}
	return (write(1, "\n", 1));
}
