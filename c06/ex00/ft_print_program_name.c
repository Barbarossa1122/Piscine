/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:46:58 by fionni            #+#    #+#             */
/*   Updated: 2024/11/26 13:01:39 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac >= 1)
	{
		i = 0;
		while (av[0][i] != '\0')
		{
			write(1, &av[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
}
