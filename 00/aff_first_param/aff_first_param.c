/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 19:59:48 by smorty            #+#    #+#             */
/*   Updated: 2019/08/08 21:50:37 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char *p;

	if (argc > 1)
	{
		p = *(++argv);
		while (*p)
			++p;
		write(1, *argv, p - *argv);
	}
	return (write(1, "\n", 1));
}