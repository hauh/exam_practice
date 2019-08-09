/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorty <smorty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 20:51:52 by smorty            #+#    #+#             */
/*   Updated: 2019/08/09 21:21:59 by smorty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char *left;
	char *right;
	char swap;

	if (str)
	{
		left = str;
		right = str;
		while (*right)
			++right;
		while (left < right--)
		{
			swap = *left;
			*left = *right;
			*right = swap;
			++left;
		}
	}
	return (str);
}
