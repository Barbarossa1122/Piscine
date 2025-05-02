/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:20:11 by fionni            #+#    #+#             */
/*   Updated: 2024/11/19 17:45:26 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i - 1] >= 97 && str[i - 1] <= 122)
			|| (str[i - 1] >= 65 && str[i - 1] <= 90)
			|| (str[i - 1] >= 48 && str[i - 1] <= 57))
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
		}
		else if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "salut,_comment 4u vas ?";
	
	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
}
*/
