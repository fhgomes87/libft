/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 10:40:14 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/13 15:35:08 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*paux1;
	unsigned char	*paux2;

	i = 0;
	paux1 = (unsigned char *)s1;
	paux2 = (unsigned char *)s2;
	while (i < n)
	{
		if (paux1[i] != paux2[i])
		{
			return (((int)paux1[i]) - ((int)paux2[i]));
		}
		i++;
	}
	return (0);
}
