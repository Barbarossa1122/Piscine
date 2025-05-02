/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:30:17 by fionni            #+#    #+#             */
/*   Updated: 2024/11/27 20:04:06 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	i;

	i = 0;
	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[i] != '\0')
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (dest);
}

int	ft_totlen(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	seplen;

	i = 0;
	len = 0;
	seplen = ft_strlen(sep);
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += seplen;
		i++;
	}
	return (len);
}

void	ft_cat( char *str, char *src, char *sep, int last)
{
	ft_strcat(str, src);
	if (!last)
		ft_strcat(str, sep);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	if (size == 0)
	{
		str = malloc(1);
		if (!str)
			return (0);
		str[0] = '\0';
		return (str);
	}
	len = ft_totlen(size, strs, sep);
	str = malloc((len + 1) * sizeof (char));
	if (!str)
		return (0);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_cat(str, strs[i], sep, (i == size - 1));
		i++;
	}
	return (str);
}
