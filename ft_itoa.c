/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosa <prosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 16:31:52 by prosa             #+#    #+#             */
/*   Updated: 2017/10/09 16:45:29 by prosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			ft_stocknbr(int nb, char *stock, int *i)
{
	if (nb < 0)
	{
		stock[*i] = '-';
		*i += 1;
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_stocknbr(nb / 10, stock, i);
		ft_stocknbr(nb % 10, stock, i);
	}
	else
	{
		stock[*i] = (char)nb + '0';
		*i += 1;
	}
}

char				*ft_itoa(int nbr)
{
	char			*result;
	int				i;
	int				size;

	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_nlen(nbr) + 1;
	if (!(result = malloc(sizeof(char) * (unsigned int)size)))
		return (NULL);
	i = 0;
	ft_stocknbr(nbr, result, &i);
	result[size - 1] = '\0';
	return (result);
}
