/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:02:40 by fionni            #+#    #+#             */
/*   Updated: 2024/11/17 20:37:44 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
//int k = 4;
//CONTROLLA CHE IL NUMERO CI SIA E NON SI RIPETA
int	check_double(int tab[k][k], int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos / k)
		if (tab[i][pos % k] == num)
			return (1);
	i = -1;
	while (++i < pos % k)
		if (tab[pos / k][i] == num)
			return (1);
	return (0);
}

//LOOP PRINCIPALE CHE RISOLVE E RIEMPIE LE CASELLE
int	solve(int tab[k][k], int entry[(k*k)], int pos)
{
	int	size;

	if (pos == (k * k))
		return (1);
	size = 0;
	while (++size <= k)
	{
		if (check_double(tab, pos, size) == 0)
		{
			tab[pos / k][pos % k] = size;
			if (check_case(tab, pos, entry) == 0)
			{
				if (solve(tab, entry, pos + 1) == 1)
					return (1);
			}
			else
				tab[pos / k][pos % k] = 0;
		}
	}
	return (0);
}

//STAMPA LE SOLUZIONI NEL TERMINALE
void	display_solution(int tab[k][k])
{
	int	i;
	int	j;

	i = -1;
	while (++i < k)
	{
		j = -1;
		while (++j < k)
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
	int	tab[9][9];

	if (check(ac, av) == 1)
		return (0);
	entry = get_numbers(av[1]);
	if (solve(tab, entry, 0) == 1)
		display_solution(tab);
	else
		ft_putstr("Error\n");
	return (0);
}
