/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosa <prosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 16:36:02 by prosa             #+#    #+#             */
/*   Updated: 2017/10/09 16:41:35 by prosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nlen(int n)
{
	unsigned int	len;

	if (n == 0)
		return (1);
	len = (n < 0) ? 1 : 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
