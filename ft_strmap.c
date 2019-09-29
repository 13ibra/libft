/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-kha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 22:43:39 by ibel-kha          #+#    #+#             */
/*   Updated: 2019/04/22 15:59:50 by ibel-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	int					i;
	int					len;
	char				*s;

	i = 0;
	len = 0;
	if (str == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(str);
	if (!(s = (char *)malloc(len + 1)))
		return (NULL);
	while (str[i] != '\0')
	{
		s[i] = (*f)(str[i]);
		i++;
	}
	s[i] = '\0';
	return (s);
}
