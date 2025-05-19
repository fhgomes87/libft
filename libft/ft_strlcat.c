/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 08:20:29 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/13 15:39:03 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ldest;
	size_t	lsrc;
	size_t	i;

	if (size == 0 && dst == NULL)
		return (0);
	ldest = 0;
	lsrc = 0;
	i = 0;
	while (dst[ldest] && ldest < size)
		ldest++;
	while (src[lsrc])
		lsrc++;
	if (size <= ldest)
		return (size + lsrc);
	while (src[i] && (ldest + i) < size - 1)
	{
		dst[ldest + i] = src[i];
		i++;
	}
	dst[ldest + i] = '\0';
	return (ldest + lsrc);
}
