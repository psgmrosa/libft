/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosa <prosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 17:06:44 by prosa             #+#    #+#             */
/*   Updated: 2017/09/30 12:19:14 by prosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*string;
	size_t		len_src;
	size_t		len_dst;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst < size)
	{
		string = dst + len_dst;
		ft_bzero(string, size - len_dst);
		ft_memcpy(string, src, size - len_dst - 1);
		return (len_dst + len_src);
	}
	return (len_src + size);
}
