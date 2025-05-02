/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:09:41 by fionni            #+#    #+#             */
/*   Updated: 2024/11/14 16:06:06 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>   

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char dest[20];
	char *src = "hi m8";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return 0;
}
*/
