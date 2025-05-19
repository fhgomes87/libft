/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:54:52 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/18 18:10:32 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*news;

	i = 0;
	if (!s || !f)
		return (NULL);
	news = (char *) malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!news)
		return (NULL);
	len = ft_strlen(s);
	while (i < len)
	{
		news[i] = f(i, s[i]);
		i++;
	}
	news[i] = '\0';
	return (news);
}
