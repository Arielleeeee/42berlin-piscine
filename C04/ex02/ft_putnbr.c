/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:20:47 by tulee             #+#    #+#             */
/*   Updated: 2025/03/05 14:58:08 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}
/*int	main()
{
	ft_putnbr(INT_MIN);
	return (0);
}*/
/*why need long
 because if INT_MIN convert to positive value is one size larger than INT_MAX,
 so when negate INT_MIN will cause overflow
	INT_MIN :–2,147,483,648
	INT_MAX : 2,147,483,647*/
