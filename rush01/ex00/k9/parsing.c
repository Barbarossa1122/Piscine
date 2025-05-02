/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:45:52 by fionni            #+#    #+#             */
/*   Updated: 2024/11/17 20:34:24 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>

//int	k = 4;

//CONTROLLO VALIDITA' DELLA STRINGA ATTRAVERSO IL NUMERO DEI CARATTERI
int	check(int ac, char **av)
{
	if (ac != 2)
		return (1);
	if (ft_strlen(av[1]) != ((k * 8) - 1))
		return (1);
	return (0);
}

//CONVERTE I NUMERI DELLA STRINGA DA CHAR A INT USANDO ATOI
int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * (k * k));
	if (!(tab))
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
	return (tab);
}
