/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosa <prosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 17:53:31 by prosa             #+#    #+#             */
/*   Updated: 2017/10/06 17:54:51 by prosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*tab;

	tab = (char *)s + ft_strlen(s);
	while (*tab != c)
	{
		if (tab == s)
			return (NULL);
		tab--;
	}
	return (tab);
}
