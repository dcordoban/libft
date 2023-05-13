/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcordoba <dcordoba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:30:20 by dcordoba          #+#    #+#             */
/*   Updated: 2023/05/02 16:34:43 by dcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_toupper(int c)
{
	if ((unsigned char) c >= 'a' && (unsigned char) c <= 'z')
		return (c - 32);
	return (c);
}
