/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:08:26 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/12 17:48:01 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destaux;
	unsigned char	*srcaux;
	size_t			i;

	if (!dest && !src)
		return (dest);
	i = 0;
	srcaux = (unsigned char *) src;
	destaux = (unsigned char *) dest;
	while (i < n)
	{
		destaux[i] = srcaux[i];
		i++;
	}
	return (dest);
}
