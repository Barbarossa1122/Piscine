/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:35:34 by fionni            #+#    #+#             */
/*   Updated: 2024/11/27 15:23:51 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (dest == 0)
		return (0);
	while (src[i] != '\0')
	{
		dest [i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main() 
{
    char *original = "Hello, world!";
    char *copy = ft_strdup(original);
    
    if (copy != NULL) {
        printf("Copia: %s\n", copy);
        free(copy); // Non dimenticare di liberare la memoria
    } else {
        printf("Errore nell'allocazione della memoria.\n");
    }
    
    return 0;
}
*/
