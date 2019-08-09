/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 21:09:31 by smorty            #+#    #+#             */
/*   Updated: 2019/08/09 21:20:28 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	int size;
	int bits;

	size = sizeof(unsigned int) * 8;
	bits = 0;
	while (size--)
		if ((n >> size) & 1)
			++bits;
	return (bits == 1 ? 1 : 0);
}
