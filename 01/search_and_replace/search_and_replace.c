/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 21:12:00 by smorty            #+#    #+#             */
/*   Updated: 2019/08/09 18:18:31 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	valid_args(char *arg1, char *arg2)
{
	if ((*arg1 < 'A' || (*arg1 > 'Z' && *arg1 < 'a') || *arg1 > 'z')
		|| (*arg2 < 'A' || (*arg2 > 'Z' && *arg2 < 'a') || *arg2 > 'z')
		|| (*(arg1 + 1) || *(arg2 + 1)))
		return (0);
	return (1);
}

int			main(int argc, char **argv)
{
	char *p;

	if (argc == 4 && valid_args(*(argv + 2), *(argv + 3)))
	{
		p = *(++argv);
		while (*p)
		{
			if (*p == **(argv + 1))
				*p = **(argv + 2);
			++p;
		}
		write(1, *argv, p - *argv);
	}
	return (write(1, "\n", 1) - 1);
}
