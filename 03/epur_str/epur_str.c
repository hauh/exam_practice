/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 00:32:27 by smorty            #+#    #+#             */
/*   Updated: 2019/08/10 00:35:35 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char *p;

	if (argc == 2)
	{
		p = *(++argv);
		while (**argv)
		{
			while (*p && *p == ' ' || *p == '')
	}
	return (write(1, "\n", 1) - 1);
}
