/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnumber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:33:02 by ctacconi          #+#    #+#             */
/*   Updated: 2023/11/05 15:18:33 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print('-');
		print('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		print('-');
		nb = nb * (-1);
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		print(nb + '0');
}

/*int	main(void)
{
	ft_putnbr(42);
	print('\n');
	ft_putnbr(-42);
	print('\n');
 	ft_putnbr(-2147483648);
    print('\n');
 	ft_putnbr(2147483647);
	print('\n');
	ft_putnbr(59643);
	print('\n');
	return (0);
}*/
