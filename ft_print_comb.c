/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrinh <htrinh@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:06:56 by htrinh            #+#    #+#             */
/*   Updated: 2024/06/10 19:52:11 by htrinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb(void)
{	
	char x;
	char y;
	char z;

	x = '0';
	while (x <= '7')
	{
	y = x + 1;
		while (y <= '8')
		{
	       	z = y + 1;		
			while (z <= '9')
			{
			ft_putchar(x);
			ft_putchar(y);
			ft_putchar(z);
			write(1, ", ", 2);
			z++;
			}
		y++;	
		}
	x++;
	}
	
}


int	main(void)
{
	ft_print_comb();
	return (0);
}
