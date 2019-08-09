/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 21:25:27 by smorty            #+#    #+#             */
/*   Updated: 2019/08/09 21:48:00 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*p;
	int		spaces;

	if (argc == 2 && **(++argv))
	{
		p = *argv;
		spaces = 0;
		while (*p)
			if (*p++ < 33)
				++spaces;
		while (*--p < 33 && spaces)
			--spaces;
		while (spaces)
			if (*(*argv)++ < 33)
				--spaces;
		write(1, *argv, p - *argv + 1);
	}
	return (write(1, "\n", 1) - 1);
}
