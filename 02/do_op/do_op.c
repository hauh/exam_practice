/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 20:12:38 by smorty            #+#    #+#             */
/*   Updated: 2019/08/09 20:22:55 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (**(argv + 2) == '+')
			printf("%d", atoi(*(argv + 1)) + atoi(*(argv + 3)));
		else if (**(argv + 2) == '-')
			printf("%d", atoi(*(argv + 1)) - atoi(*(argv + 3)));
		else if (**(argv + 2) == '*')
			printf("%d", atoi(*(argv + 1)) * atoi(*(argv + 3)));
		else if (**(argv + 2) == '/')
			printf("%d", atoi(*(argv + 1)) / atoi(*(argv + 3)));
		else if (**(argv + 2) == '%')
			printf("%d", atoi(*(argv + 1)) % atoi(*(argv + 3)));
	}
	return (printf("\n") - 1);
}
