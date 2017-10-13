/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosa <prosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 16:50:44 by prosa             #+#    #+#             */
/*   Updated: 2017/09/30 12:17:04 by prosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*counter;
	size_t		i;

	counter = (const char *)s;
	i = -1;
	while (++i < n)
		if (*(counter + i) == (char)c)
			return ((void *)counter + i);
	return (NULL);
}
