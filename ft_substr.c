/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:33:21 by david             #+#    #+#             */
/*   Updated: 2023/05/13 17:21:56 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_chunk(const char *s, int start, size_t len)
{
	unsigned int	counter;
	int				s_len;

	counter = 0;
	s_len = ft_strlen(s);
	while (start < s_len && s[start++] != '\0' && len-- > 0)
		counter += 1;
	return (counter);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	int		chunk;
	int		i;

	i = 0;
	chunk = count_chunk(s, start, len);
	substring = (char *)malloc((chunk + 1) * sizeof(char));
	if (substring)
	{
		while (i < chunk)
			substring[i++] = s[start++];
		substring[i] = '\0';
		return (substring);
		free(substring);
	}
	return (0);
}
