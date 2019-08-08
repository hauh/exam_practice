/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 21:38:32 by smorty            #+#    #+#             */
/*   Updated: 2019/08/08 21:50:34 by smorty           ###   ########.fr       */
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
				*p += 32;
			else if (*p >= 'a' && *p <= 'z')
				*p -= 32;
			++p;
		}
		write(1, *argv, p - *argv);
	}
	return (write(1, "\n", 1));
}
