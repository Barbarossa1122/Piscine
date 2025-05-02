/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:01:57 by fionni            #+#    #+#             */
/*   Updated: 2024/11/12 16:18:15 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size -1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
int main() 
{
	int array[] = {1, 2, 3, 4, 5};
       	int size = sizeof(array) / sizeof(array[0]);
       	ft_rev_int_tab(array, size);
	for (int i = 0; i < size; i++)
	{
        printf("%d ", array[i]);
	}
}
*/
