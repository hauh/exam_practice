/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 15:38:25 by smorty            #+#    #+#             */
/*   Updated: 2019/08/10 16:15:37 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn_calc.h"

static void	push(t_stack **s, int n)
{
	t_stack *new;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->n = n;
	new->next = *s;
	*s = new;
}

static void	pop(t_stack **s)
{
	t_stack *clean;

	clean = *s;
	*s = (*s)->next;
	free(clean);
}

static int	operation(char op, int a, int b)
{
	if (op == '+')
		return (a + b);
	if (op == '-')
		return (a - b);
	if (op == '*')
		return (a * b);
	if (op == '/')
		return (a / b);
	if (op == '%')
		return (a % b);
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack *s;

	if (argc != 2)
		return (printf("Error\n"));
	++argv;
	s = NULL;
	while (**argv)
	{
		while (**argv == ' ')
			++(*argv);
		if ((**argv >= '0' && **argv <= '9')
			|| ((**argv == '-' || **argv == '+') && (*(*argv + 1) >= '0' && *(*argv + 1) <= '9')))
		{
			push(&s, atoi(*argv));
			if (**argv == '-' || **argv == '+')
				++(*argv);
			while (**argv >= '0' && **argv <= '9')
				++(*argv);
		}
		else if (**argv == '+' || **argv == '-' || **argv == '*' || **argv == '/' || **argv == '%')
		{
			if (!s || !s->next || ((**argv == '/' || **argv == '%') && !s->n))
				return (printf("Error\n"));
			s->next->n = operation(**argv, s->next->n, s->n);
			pop(&s);
			++(*argv);
		}
		else if (**argv)
			return (printf("Error\n"));
	}
	if (!s || s->next)
		return (printf("Error\n"));
	printf("%d\n", s->n);
	pop(&s);
	return (0);
}
