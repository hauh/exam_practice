/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 19:37:52 by smorty            #+#    #+#             */
/*   Updated: 2019/08/09 18:15:34 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "a\n", 2));
	++argv;
	while (**argv)
		if (*(*argv)++ == 'a')
			return (write(1, "a\n", 2));
	return (write(1, "\n", 1) - 1);
}
