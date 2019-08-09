/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 23:59:26 by smorty            #+#    #+#             */
/*   Updated: 2019/08/09 18:18:49 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	was_before(char *p0, char *p1)
{
	while (p0 != p1)
		if (*p0++ == *p1)
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
			if (!was_before(*argv, p0))
			{
				p1 = *(argv + 1);
				while (*p1 && *p1 != *p0)
					++p1;
				if (*p1)
					write(1, p1, 1);
			}
			++p0;
		}
	}
	return (write(1, "\n", 1) - 1);
}
