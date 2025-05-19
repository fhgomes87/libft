/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 10:00:28 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/13 15:33:41 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*var;

	i = 0;
	var = (unsigned char *)s;
	while (i < n)
	{
		if (var[i] == (unsigned char) c)
		{
			return ((void *) &var[i]);
		}
		i++;
	}
	return (0);
}
