/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 21:52:45 by smorty            #+#    #+#             */
/*   Updated: 2019/08/10 00:30:55 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static int	ft_atoi(char *s)
{
	int res;

	while (*s < 33)
		++s;
	if (*s == '+')
		++s;
	res = 0;
	while (*s >= '0' && *s <= '9')
		res = res * 10 + *s++ - '0';
	return (res);
}

static int is_prime(int n)
{
	int i;

	if (n > 3)
	{
		if (!(n % 2 && n % 3))
			return (0);
		i = 5;
		while (i * i <= n)
		{
			if (!(n % i && n % (i + 2)))
				return (0);
			i += 6;
		}
	}
	return (1);
}

static void	ft_putnbr(long n)
{
	char c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int			main(int argc, char **argv)
{
	long	summ;
	int		n;

	summ = 0;
	if (argc == 2)
	{
		n = ft_atoi(*(argv + 1));
		while (n > 1)
			if (is_prime(n--))
				summ += n + 1;
	}
	ft_putnbr(summ);
	return (write(1, "\n", 1) - 1);
}
