/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:17:05 by tulee             #+#    #+#             */
/*   Updated: 2025/03/09 13:45:47 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}

/*int main(void)
{
	printf("ft_recursive_power(2, 0) = %d\n", 
		ft_recursive_power(2, 0));   // 1
	printf("ft_recursive_power(0, 0) = %d\n", 
		ft_recursive_power(0, 0));   // 1
	printf("ft_recursive_power(0, 5) = %d\n", 
		ft_recursive_power(0, 5));   // 0
	printf("ft_recursive_power(2, 3) = %d\n", 
		ft_recursive_power(2, 3));   // 8
	printf("ft_recursive_power(-2, 3) = %d\n", 
		ft_recursive_power(-2, 3)); // -8
	printf("ft_recursive_power(-2, 2) = %d\n", 
		ft_recursive_power(-2, 2)); // 4
	printf("ft_recursive_power(2, -1) = %d\n", 
		ft_recursive_power(2, -1)); // 0
	return 0;
}*/
