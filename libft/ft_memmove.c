/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:27:14 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/13 15:15:42 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*srcaux;
	unsigned char	*destaux;
	size_t			i;

	if (dest == src || n == 0)
		return (dest);
	srcaux = (unsigned char *)src;
	destaux = (unsigned char *)dest;
	if (srcaux < destaux)
	{
		i = n;
		while (i-- > 0)
			destaux[i] = srcaux[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			destaux[i] = srcaux[i];
			i++;
		}
	}
	return (dest);
}
