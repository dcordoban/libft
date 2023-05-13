/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcordoba <dcordoba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:04:08 by dcordoba          #+#    #+#             */
/*   Updated: 2023/03/02 12:02:09 by dcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_isupper(int c)
{
	if ((unsigned char) c >= 'A' && (unsigned char) c <= 'Z')
		return (1);
	else
		return (0);
}
