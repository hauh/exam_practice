/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 23:03:35 by smorty            #+#    #+#             */
/*   Updated: 2019/08/08 23:43:19 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	res;
	int		sign;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		++str;
	sign = (*str == '-' ? -1 : 1);
	if (*str == '-' || *str == '+')
		++str;
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		if (res * 10 / 10 != res)
			return (sign < 0 ? 0 : -1);
		res = res * 10 + *str++ - '0';
	}
	return ((int)res * sign);
}
