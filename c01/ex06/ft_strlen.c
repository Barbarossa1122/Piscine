/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:09:41 by fionni            #+#    #+#             */
/*   Updated: 2024/11/12 16:16:43 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght ++;
	}
	return (lenght);
}
/*
int main()
{
	char *str = "Ciao, mondo!";

	int lenght = ft_strlen(str);
	printf ("La lunghezza della stringa è: %d\n", lenght);
	return 0;
}
*/
