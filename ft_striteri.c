/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcordoba <dcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:42:13 by dcordoba          #+#    #+#             */
/*   Updated: 2023/05/17 17:57:31 by dcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	int	i;
	int	s_len;

	i = 0;
	s_len = ft_strlen(s);
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
