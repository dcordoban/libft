/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcordoba <dcordoba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:04:08 by dcordoba          #+#    #+#             */
/*   Updated: 2023/03/02 12:02:09 by dcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_islower(int c)
{
	if ((unsigned char) c >= 'a' && (unsigned char) c <= 'z')
		return (1);
	else
		return (0);
}
