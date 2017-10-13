/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosa <prosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 17:09:20 by prosa             #+#    #+#             */
/*   Updated: 2017/10/06 17:55:15 by prosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*tab;

	i = 0;
	tab = (char *)s;
	while (tab[i] != c)
	{
		if (tab[i] == '\0')
			return (NULL);
		i++;
	}
	return (tab + i);
}
