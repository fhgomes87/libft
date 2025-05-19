/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:06:44 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/13 15:37:52 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*s2;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	s2 = (char *) malloc((i + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (j < i)
	{
		s2[j] = s[j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
