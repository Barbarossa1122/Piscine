/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:02:40 by fionni            #+#    #+#             */
/*   Updated: 2024/11/17 20:12:22 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	check_double(int tab[K][K], int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos / K)
		if (tab[i][pos % K] == num)
			return (1);
	i = -1;
	while (++i < pos % K)
		if (tab[pos / K][i] == num)
			return (1);
	return (0);
}

int	solve(int tab[K][K], int entry[(K*K)], int pos)
{
	int	size;

	if (pos == (K * K))
		return (1);
	size = 0;
	while (++size <= K)
	{
		if (check_double(tab, pos, size) == 0)
		{
			tab[pos / K][pos % K] = size;
			if (check_case(tab, pos, entry) == 0)
			{
				if (solve(tab, entry, pos + 1) == 1)
					return (1);
			}
			else
				tab[pos / K][pos % K] = 0;
		}
	}
	return (0);
}

void	display_solution(int tab[K][K])
{
	int	i;
	int	j;

	i = -1;
	while (++i < K)
	{
		j = -1;
		while (++j < K)
		{
			ft_putnbr(tab[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	int	*entry;
	int	tab[6][6];

	if (check(ac, av) == 1)
		return (0);
	entry = get_numbers(av[1]);
	if (solve(tab, entry, 0) == 1)
		display_solution(tab);
	else
		ft_putstr("Error\n");
	return (0);
}
