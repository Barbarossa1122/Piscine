/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:01:04 by fionni            #+#    #+#             */
/*   Updated: 2024/11/10 14:41:52 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 0;
	if ((y <= 0 || y > 2147483647) || (x <= 0 || x > 2147483647))
		write(1, "Incorrect input", 15);
	while (r < y)
	{
		c = 0;
		while (c < x)
		{
			if (c == 0 && (r == 0 || r == y - 1))
				ft_putchar('A');
			else if (c == x - 1 && (r == 0 || r == y - 1))
				ft_putchar('C');
			else if ((r == 0 || r == y - 1) || (c == 0 || c == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
