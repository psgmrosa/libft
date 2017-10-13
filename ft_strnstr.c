/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosa <prosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 18:02:27 by prosa             #+#    #+#             */
/*   Updated: 2017/10/06 19:15:46 by prosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *lit, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	len = ft_strlen(lit);
	if (!*lit && big == lit)
		return ((char *)big);
	while (big[i] != '\0' && len + i <= n)
	{
		j = 0;
		while (big[i + j] == lit[j] && big[i + j] && lit[j])
			j++;
		if (!(lit[j]))
			return ((char *)big + i);
		i++;
	}
	return (0);
}
