/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:58:34 by fionni            #+#    #+#             */
/*   Updated: 2024/11/25 12:16:46 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	f;

	f = 1;
	while (nb > 0)
	{
		f *= nb;
		nb--;
	}
	while (nb < 0)
	{
		return (0);
	}
	return (f);
}
/*
int	main()
{
	printf("%d\n", ft_iterative_factorial());
}
*/
