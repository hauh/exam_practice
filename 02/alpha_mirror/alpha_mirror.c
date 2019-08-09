/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 19:10:30 by smorty            #+#    #+#             */
/*   Updated: 2019/08/09 19:35:47 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char *p;

	if (argc == 2)
	{
		p = *(++argv);
		while (*p)
		{
			if (*p >= 'A' && *p <= 'Z')
				*p += 25 + ('A' - *p) * 2;
			else if (*p >= 'a' && *p <= 'z')
				*p += 25 + ('a' - *p) * 2;
			++p;
		}
		write(1, *argv, p - *argv);
	}
	return (write(1, "\n", 1) - 1);
}