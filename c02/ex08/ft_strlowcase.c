/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:06:12 by fionni            #+#    #+#             */
/*   Updated: 2024/11/19 12:56:40 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int main()
{
        char str1[] = "HELLO";
        char str2[] = "d54TTRrTa";
        char str3[] = "LLL_d";


        printf("%s\n", ft_strlowcase(str1));
        printf("%s\n", ft_strlowcase(str2));
        printf("%s\n", ft_strlowcase(str3));
}
*/
