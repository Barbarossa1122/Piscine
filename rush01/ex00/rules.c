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

int	check_col_up(int tab[K][K], int pos, int entry[(K*K)])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / K == K - 1)
	{
		while (i < K)
		{
			if (tab[i][pos % K] > max)
			{
				max = tab[i][pos % K];
				count++;
			}
			i++;
		}
		if (entry[pos % K] != count)
			return (1);
	}
	return (0);
}

int	check_row_right(int tab[K][K], int pos, int entry[(K*K)])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = K;
	max_size = 0;
	visible_towers = 0;
	if (pos % K == K - 1)
	{
		while (--i >= 0)
		{
			if (tab[pos / K][i] > max_size)
			{
				max_size = tab[pos / K][i];
				visible_towers++;
			}
		}
		if (entry[(K * 3) + pos / K] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_col_down(int tab[K][K], int pos, int entry[(K*K)])
{
	int	i;
	int	max;
	int	count;

	i = K - 1;
	max = 0;
	count = 0;
	if (pos / K == (K - 1))
	{
		while (i >= 0)
		{
			if (tab[i][pos % K] > max)
			{
				max = tab[i][pos % K];
				count++;
			}
			i--;
		}
		if (entry[K + pos % K] != count)
			return (1);
	}
	return (0);
}

int	check_row_left(int tab[K][K], int pos, int entry[(K*K)])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % K == K - 1)
	{
		while (i < K)
		{
			if (tab[pos / K][i] > max)
			{
				max = tab[pos / K][i];
				count++;
			}
			i++;
		}
		if (entry[(K * 2) + pos / K] != count)
			return (1);
	}
	return (0);
}

int	check_case(int tab[K][K], int pos, int entry[(K*K)])
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
