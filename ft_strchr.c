/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcordoba <dcordoba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:57:06 by dcordoba          #+#    #+#             */
/*   Updated: 2023/05/07 18:04:20 by dcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	to_find;

	i = 0;
	to_find = (unsigned char) c;
	while (i <= ft_strlen(s))
	{
		if (s[i] == to_find)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
