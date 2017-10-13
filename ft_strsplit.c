/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosa <prosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 17:12:37 by prosa             #+#    #+#             */
/*   Updated: 2017/10/12 20:19:45 by prosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	k;
	int		fi;
	int		la;
	char	**tab;

	tab = NULL;
	i = 0;
	k = 0;
	if (s && (tab = (char **)malloc(sizeof(*tab) * (ft_strlen(s) / 2 + 2))))
	{
		while (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			fi = i;
			while (s[i] && s[i] != c)
				i++;
			la = i;
			if (la > fi)
				tab[k++] = ft_strsub(s, fi, (la - fi));
		}
		tab[k] = NULL;
	}
	return (tab);
}
