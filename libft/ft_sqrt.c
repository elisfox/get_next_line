/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojoseph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:39:09 by jojoseph          #+#    #+#             */
/*   Updated: 2019/09/23 18:29:15 by jojoseph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int a;

	a = 0;
	if (nb > 46340 * 46340)
		return (0);
	while (a * a < nb)
		a++;
	if ((a * a) == nb)
		return (a);
	else
		return (0);
}
