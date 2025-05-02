/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:48:31 by fionni            #+#    #+#             */
/*   Updated: 2024/11/17 19:59:54 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.h"
//int	k = 4;
//CONTROLLI VALORI PER OGNI PROSPETTIVA 
int	check_col_up(int tab[k][k], int pos, int entry[(k*k)])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / k == k - 1)
	{
		while (i < k)
		{
			if (tab[i][pos % k] > max)
			{
				max = tab[i][pos % k];
				count++;
			}
			i++;
		}
		if (entry[pos % k] != count)
			return (1);
	}
	return (0);
}

int	check_row_right(int tab[k][k], int pos, int entry[(k*k)])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = k;
	max_size = 0;
	visible_towers = 0;
	if (pos % k == k - 1)
	{
		while (--i >= 0)
		{
			if (tab[pos / k][i] > max_size)
			{
				max_size = tab[pos / k][i];
				visible_towers++;
			}
		}
		if (entry[(k * 3) + pos / k] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_col_down(int tab[k][k], int pos, int entry[(k*k)])
{
	int	i;
	int	max;
	int	count;

	i = k - 1;
	max = 0;
	count = 0;
	if (pos / k == (k - 1))
	{
		while (i >= 0)
		{
			if (tab[i][pos % k] > max)
			{
				max = tab[i][pos % k];
				count++;
			}
			i--;
		}
		if (entry[k + pos % k] != count)
			return (1);
	}
	return (0);
}

int	check_row_left(int tab[k][k], int pos, int entry[(k*k)])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % k == k - 1)
	{
		while (i < k)
		{
			if (tab[pos / k][i] > max)
			{
				max = tab[pos / k][i];
				count++;
			}
			i++;
		}
		if (entry[(k * 2) + pos / k] != count)
			return (1);
	}
	return (0);
}

// LA FUNZIONE RAGGRUPPA I CONTROLLI DELLE VARIE PROSPETTIVE

int	check_case(int tab[k][k], int pos, int entry[(k*k)])
{
	if (check_row_left(tab, pos, entry) == 1)
		return (1);
	if (check_row_right(tab, pos, entry) == 1)
		return (1);
	if (check_col_down(tab, pos, entry) == 1)
		return (1);
	if (check_col_up(tab, pos, entry) == 1)
		return (1);
	return (0);
}
