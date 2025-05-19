/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:45:31 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/18 18:04:59 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calc_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*var;
	unsigned int	num;

	len = ft_calc_len(n);
	var = (char *) malloc((len + 1) * sizeof(char));
	if (var == NULL)
		return (NULL);
	var[len] = '\0';
	if (n < 0)
	{
		var[0] = '-';
		num = -n;
	}
	else
		num = n;
	while (len > 0 && num != 0)
	{
		var[--len] = (num % 10) + '0';
		num = num / 10;
	}
	if (n == 0)
		var[0] = '0';
	return (var);
}
