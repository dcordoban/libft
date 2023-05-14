/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:47:05 by david             #+#    #+#             */
/*   Updated: 2023/05/14 23:02:07 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	is_word;
	int	counter;

	is_word = 0;
	counter = 0;
	while (*s)
	{
		if (*s != c && is_word == 0)
		{
			is_word = 1;
			counter++;
		}
		if (*s == c)
			is_word = 0;
		s++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**container;

}
