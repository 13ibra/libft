/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-kha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:15:54 by ibel-kha          #+#    #+#             */
/*   Updated: 2019/04/22 17:00:21 by ibel-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int					i;
	unsigned char		*str;
	unsigned char		*stp;

	i = -1;
	str = (unsigned char *)dest;
	stp = (unsigned char *)src;
	if (stp < str)
		while ((int)(--n) >= 0)
			str[n] = stp[n];
	else
		while (++i < (int)n)
			str[i] = stp[i];
	return (dest);
}
