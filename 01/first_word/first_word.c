/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 22:27:52 by smorty            #+#    #+#             */
/*   Updated: 2019/08/08 22:33:51 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char *p;

	if (argc == 2)
	{
		++argv;
		while (**argv && **argv < 33)
			++(*argv);
		p = *argv;
		while (*p > 33)
			++p;
		write(1, *argv, p - *argv);
	}
	return (write(1, "\n", 1));
}
