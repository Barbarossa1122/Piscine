/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:07:18 by fionni            #+#    #+#             */
/*   Updated: 2024/11/19 12:50:37 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int main()
{
        char str1[] = "e2llo";
        char str2[] = "dica";
        char str3[] = "lll_dff";


        printf("%s\n", ft_strupcase(str1));
        printf("%s\n", ft_strupcase(str2));
        printf("%s\n", ft_strupcase(str3));
}
*/
