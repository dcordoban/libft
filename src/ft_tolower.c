/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcordoba <dcordoba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:35:01 by dcordoba          #+#    #+#             */
/*   Updated: 2023/05/02 16:37:16 by dcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_tolower(int c)
{
	if ((unsigned char) c >= 'A' && (unsigned char) c <= 'Z')
		return (c + 32);
	return (c);
}
