/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:24:30 by fionni            #+#    #+#             */
/*   Updated: 2024/11/27 17:00:52 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*dest;

	if (min >= max)
		return (0);
	len = max - min;
	dest = malloc(len * sizeof (int));
	i = 0;
	if (dest == 0)
		return (0);
	while (i < len)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
/*
int	main()
{
	printf("%ls\n", ft_range(9, 18));
}
*/
