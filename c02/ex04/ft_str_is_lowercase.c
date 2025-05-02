/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:37:08 by fionni            #+#    #+#             */
/*   Updated: 2024/11/19 12:14:09 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
        char *str1 = "ello";
        char *str2 = "123";
        char *str3 = "";


        printf("%d\n", ft_str_is_lowercase(str1));
        printf("%d\n", ft_str_is_lowercase(str2));
        printf("%d\n", ft_str_is_lowercase(str3));
}
*/
