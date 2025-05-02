/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:41:35 by fionni            #+#    #+#             */
/*   Updated: 2024/11/19 12:20:41 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
        char *str1 = "HELLO";
        char *str2 = "123";
        char *str3 = "";


        printf("%d\n", ft_str_is_uppercase(str1));
        printf("%d\n", ft_str_is_uppercase(str2));
        printf("%d\n", ft_str_is_uppercase(str3));
}
*/
