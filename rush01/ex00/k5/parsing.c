/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:45:52 by fionni            #+#    #+#             */
/*   Updated: 2024/11/17 20:01:18 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>


int	check(int ac, char **av)
{
	if (ac != 2)
		return (1);
	if (ft_strlen(av[1]) != ((K * 8) - 1))
		return (1);
	return (0);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * (K * K));
	if (!(tab))
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
	return (tab);
}
