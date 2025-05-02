/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:48:12 by fionni            #+#    #+#             */
/*   Updated: 2024/11/19 12:31:26 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
        char *str1 = "	";
        char *str2 = "123";
        char *str3 = "";


        printf("%d\n", ft_str_is_printable(str1));
        printf("%d\n", ft_str_is_printable(str2));
        printf("%d\n", ft_str_is_printable(str3));
}
*/
