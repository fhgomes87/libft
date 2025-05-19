/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:50:26 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/18 16:41:46 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*naux;

	i = 0;
	if ((nmemb * size) > INT_MAX)
		return (NULL);
	naux = malloc (nmemb * size);
	if (naux == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		((unsigned char *)naux)[i] = 0;
		i++;
	}
	return (naux);
}
