/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:40:30 by fionni            #+#    #+#             */
/*   Updated: 2024/11/10 15:47:28 by fionni           ###   ########.fr       */
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
			if ((r == 0 && (c == 0 || c == x - 1))
				|| (r == y - 1 && (c == 0 || c == x - 1)))
				ft_putchar('o');
			else if (r == 0 || r == y - 1)
				ft_putchar('-');
			else if (c == 0 || c == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
