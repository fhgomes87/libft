/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:40:26 by fabiogom          #+#    #+#             */
/*   Updated: 2025/05/16 10:03:02 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	var;
	int				i;

	i = 0;
	var = (unsigned char) c;
	while (s[i] != '\0')
	{
		if (s[i] == var)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if (s[i] == var)
		return ((char *) &s[i]);
	return (0);
}

static char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		total_size;

	if (!s1 || !s2)
		return (NULL);
	total_size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	result = (char *)malloc(total_size + 1);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	ft_strcat(result, (char *)s1);
	ft_strcat(result, (char *)s2);
	return (result);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}














