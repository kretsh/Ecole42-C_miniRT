/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:39:26 by utygett           #+#    #+#             */
/*   Updated: 2022/01/16 16:16:12 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*(haystack + i) != '\0' && len > 0)
	{
		if (*(haystack + i) == *needle)
		{
			k = i;
			while (*(needle + j++) == *(haystack + k++)
				&& !(len < ft_strlen(needle)))
			{
				if (*(needle + j) == '\0')
					return (((char *) haystack) + i);
			}
			j = 0;
		}
		i++;
		len--;
	}
	return (0);
}
