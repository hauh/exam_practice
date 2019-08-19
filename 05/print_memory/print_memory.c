/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:12:36 by smorty            #+#    #+#             */
/*   Updated: 2019/08/19 20:16:55 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_memory(const void *addr, size_t size)
{
	unsigned char	*mem;
	char			*letters;
	char			ascii[16];
	int				i;
	int				j;

	letters = "0123456789abcdef";
	while (size)
	{
		i = 0;
		while (i < 16)
		{
			if (size)
			{
				mem = (unsigned char *)addr++;
				write(1, &letters[*mem / 16 % 16], 1);
				write(1, &letters[*mem % 16], 1);
				ascii[i] = (*mem < 32 || *mem > 126 ? '.' : *mem);
				--size;
				j = i;
			}
			else
				write(1, "  ", 2);
			if (i++ & 1)
				write(1, " ", 1);
		}
		write(1, ascii, j + 1);
		write(1, "\n", 1);
	}
}
