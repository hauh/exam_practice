/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 18:19:56 by smorty            #+#    #+#             */
/*   Updated: 2019/08/09 19:05:19 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	rev;
	int				i;

	rev = 0;
	i = 8;
	while (i--)
	{
		rev <<= 1;
		rev |= octet & 1;
		octet >>= 1;
	}
	return (rev);
}
