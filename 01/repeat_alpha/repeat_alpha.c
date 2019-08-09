/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 20:49:38 by smorty            #+#    #+#             */
/*   Updated: 2019/08/09 18:18:14 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int count;

	if (argc == 2)
	{
		++argv;
		while (**argv)
		{
			count = 1;
			if (**argv > 'A' && **argv <= 'Z')
				count += **argv - 'A';
			else if (**argv > 'a' && **argv <= 'z')
				count += **argv - 'a';
			while (count--)
				write(1, *argv, 1);
			++(*argv);
		}
	}
	return (write(1, "\n", 1) - 1);
}
