/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:37:44 by fionni            #+#    #+#             */
/*   Updated: 2024/11/21 15:23:48 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		y = 0;
		while (to_find[y] == str [i + y])
		{
			if (to_find[y + 1] == '\0')
				return (&str[i]);
			y++;
		}
		i++;
	}
	return (NULL);
}
