/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_untimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:23:51 by klamola           #+#    #+#             */
/*   Updated: 2020/06/25 13:07:00 by klamola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char ptr);
void	ft_putnbr(int ptr);
void	ft_putaddr(void *ptr);

void	ft_ultimate_ft(int	*********nbr)
{
	int		a;
	int		*ptr;
	int		**ptr2;
	int		***ptr3;
	int		****ptr4;
	int		*****ptr5;
	int		******ptr6;
	int		*******ptr7;
	int		********ptr8;
	int		*********ptr9;

	a =7;
	ptr=&a;
	ptr2=&ptr;
	ptr3=&ptr2;
	ptr4=&ptr3;
	ptr5=&ptr4;
	ptr6=&ptr5;
	ptr7=&ptr6;
	ptr8=&ptr7;
	ptr9=&ptr8;
}
int	main()
{
	int ptr9;
	ft_ultimate_ft(ptr9);
	printf("%d", ptr9);
	return 0;
}
