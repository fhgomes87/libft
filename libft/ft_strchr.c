/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:30:08 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/18 18:16:43 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
