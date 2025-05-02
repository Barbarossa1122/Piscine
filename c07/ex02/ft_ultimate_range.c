/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:03:18 by fionni            #+#    #+#             */
/*   Updated: 2024/11/27 20:08:26 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*dest;
	int	i;
	int	len;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	dest = malloc(len * sizeof (int));
	if (dest == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = dest;
	i = 0;
	while (i < len)
	{
		dest[i] = min + i;
		i++;
	}
	return (len);
}
