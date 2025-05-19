/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 08:29:44 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/15 10:21:11 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		init;
	int		end;
	char	*trimmed;

	i = 0;
	init = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[init] && ft_strchr(set, s1[init]))
		init++;
	while (end > init && ft_strchr (set, s1[end]))
		end--;
	trimmed = (char *) malloc(((end - init) + 2) * sizeof (char));
	if (trimmed == NULL)
		return (NULL);
	while (init <= end)
	{
		trimmed[i] = s1[init];
		i++;
		init++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
