/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:38:34 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/23 16:52:42 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word(char const *s, char c)
{
	int word;

	word = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		if (*s != c && *s)
		{
			word++;
			while (*s && *s != c)
				s++;
		}
	}
	return (word);
}