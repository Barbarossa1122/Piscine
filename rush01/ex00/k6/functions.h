/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:58:37 by fionni            #+#    #+#             */
/*   Updated: 2024/11/17 20:13:25 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

#define K 6

int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		*get_numbers(char *str);
int		check(int ac, char **av);
int		check_double(int tab[k][k], int pos, int num);
int		check_case(int tab[k][k], int pos, int entry[(k*k)]);
