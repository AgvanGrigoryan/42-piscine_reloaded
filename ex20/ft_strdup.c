/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 22:03:43 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/08 22:10:10 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

void	ft_strcpy(char *src, char *dest)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	size_t	src_len;
	char	*strdup;

	src_len = ft_strlen(src);
	strdup = (char *)malloc(src_len + 1);
	if (strdup == NULL)
		return (NULL);
	ft_strcpy(src, strdup);
	return (strdup);
}
