/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-kha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:08:35 by ibel-kha          #+#    #+#             */
/*   Updated: 2019/04/19 19:10:56 by ibel-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	char			*p;
	size_t			i;

	p = str;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)(c);
		i++;
	}
	return (str);
}
