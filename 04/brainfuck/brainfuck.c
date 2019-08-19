/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 16:09:24 by smorty            #+#    #+#             */
/*   Updated: 2019/08/19 17:17:01 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	skip(char **arg)
{
	int bracket;

	bracket = 1;
	while (bracket)
	{
		++(*arg);
		if (**arg == '[')
			++bracket;
		else if (**arg == ']')
			--bracket;
	}
}

static void	brainfuck(char *arg, char *ptr)
{
	int depth;

	while (*arg)
	{
		if (*arg == '.')
			write(1, ptr, 1);
		else if (*arg == '+')
			++(*ptr);
		else if (*arg == '-')
			--(*ptr);
		else if (*arg == '>')
			++ptr;
		else if (*arg == '<')
			--ptr;
		else if (*arg == '[')
		{
			while (*ptr)
				brainfuck(arg + 1, ptr);
			skip(&arg);
		}
		else if (*arg == ']')
			return ;
		++arg;
	}
}

static char	*allocate(char *arg)
{
	char	*res;
	int		size;

	size = 0;
	while (*arg)
	{
		if (*arg == '>')
			++size;
		else if (*arg == '<')
			--size;
		++arg;
	}
	res = (char *)malloc(sizeof(char) * size);
	arg = res;
	while (size--)
		*arg++ = 0;
	return (res);
}

int			main(int argc, char **argv)
{
	char *res;

	if (argc > 1)
	{
		res = allocate(argv[1]);
		brainfuck(argv[1], &res[0]);
		free(res);
	}
	else
		write(1, "\n", 1);
	return (0);
}
