/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:45:16 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/13 15:40:08 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	unsigned char	*dstaux;
	unsigned char	*dstsrc;

	i = 0;
	j = 0;
	dstaux = (unsigned char *) dst;
	dstsrc = (unsigned char *) src;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	while (src[i] != '\0' && i < size - 1)
	{
		dstaux[i] = dstsrc[i];
		i++;
	}
	if (size > 0)
		dstaux[i] = '\0';
	return (j);
}
