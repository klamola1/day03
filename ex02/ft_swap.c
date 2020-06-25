/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 09:47:08 by klamola           #+#    #+#             */
/*   Updated: 2020/06/25 12:23:30 by klamola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int c;
	a = c;
	b = a;
	c = b;
	ft_putchar('a');
	ft_putchar('b');
}

int	main()
{
	int *a = 6;
	int *b = 3;
	ft_swap(int *a, int *b);
	return(0);
}
