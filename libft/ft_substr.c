/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:01:04 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/29 13:40:13 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	if (start > (unsigned int)ft_strlen(s))
	{
		new = malloc(sizeof(char));
		if (new)
			new[0] = 0;
		return (new);
	}
	while (s[start + i] && i < len)
		i++;
	new = (char *)malloc(sizeof(char) * (i + 1));
	if (new)
	{
		i = 0;
		while (s[start] && i < len)
			new[i++] = s[start++];
		new[i] = 0;
	}
	return (new);
}
