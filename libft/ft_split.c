/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 08:37:29 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/18 18:08:23 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_strncpy(char *dest, const char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static char	*ft_create_substring(char const *s, char c, int i, int *len_out)
{
	int		length;
	char	*sublist;

	length = 0;
	while (s[i + length] && s[i + length] != c)
		length++;
	*len_out = length;
	sublist = (char *) malloc((length + 1) * sizeof(char));
	if (!sublist)
		return (NULL);
	ft_strncpy(sublist, &s[i], length);
	sublist[length] = '\0';
	return (sublist);
}

static char	**ft_free_sublist(char **list, int count)
{
	while (count--)
		free(list[count]);
	free(list);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		length;
	char	**list;
	char	*sublist;

	i = 0;
	j = 0;
	list = (char **) malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!list)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		sublist = ft_create_substring(s, c, i, &length);
		if (!sublist)
			return (ft_free_sublist(list, j));
		list[j++] = sublist;
		i += length;
	}
	list[j] = 0;
	return (list);
}
#include <stdio.h>
int main()
{
    char str[] = "Hello,World";
    char delimiter = ',';
    char **result = ft_split(str, delimiter);  
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("Substring %d: %s\n", i, result[i]);
        free(result[i]); // Liberar memória de cada substring
    }
    free(result); // Liberar memória do array de strings    return 0;
}

