/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcordoba <dcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:47:05 by david             #+#    #+#             */
/*   Updated: 2023/05/15 20:18:22 by dcordoba         ###   ########.fr       */
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

void	ft_freeall(char **container, int index)
{
	int	k;

	k = 0;
	while (k < index)
	{
		free(container[k]);
		k++;
	}
	free(container);
}

static char	*ft_fill_container(char **container, int word_start, int k, int i, char const *s)
{
	
	container[k] = ft_substr(s, word_start, (i - word_start));
	if (!(container[k]))
	{	
		ft_freeall(container, k);
		return (0);
	}
	return (container[k]);
}

char	**ft_split(char const *s, char c)
{
	char	**container;
	int		i;
	int		word_s;
	int		k;

	i = 0;
	k = 0;
	word_s = 0;
	if (!s)
		return(0);
	container = (char **)malloc((count_words(s, c) + 1) * sizeof(char*));
	if (!(container))
        return (0);
	while (s[i])
    {        
		while (s[i] && s[i] == c)
			i++;
		word_s = i;
		while (s[i] && s[i] != c)
        	i++;
		if (word_s != i)
		{	
			/*container[k] = ft_substr(s, word_s, (i - word_s));
			if (!(container[k]))
			{	
				ft_freeall(container, k);
				return (0);
			}*/
			ft_fill_container(container, word_s, k,	i, s);
			k++;
		}
	}
	container[k] = 0;
	return (container);
}
