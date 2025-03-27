/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:15:53 by tulee             #+#    #+#             */
/*   Updated: 2025/03/10 09:43:01 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}

/*int main(void)
{
	printf("ft_recursive_factorial(-1) = %d\n", 
		ft_recursive_factorial(-1)); // Expected: 0
	printf("ft_recursive_factorial(0) = %d\n", 
		ft_recursive_factorial(0));   // Expected: 1
	printf("ft_recursive_factorial(1) = %d\n", 
		ft_recursive_factorial(1));   // Expected: 1
	printf("ft_recursive_factorial(5) = %d\n", 
		ft_recursive_factorial(5));   // Expected: 120
	printf("ft_recursive_factorial(10) = %d\n", 
		ft_recursive_factorial(10)); // Expected: 3628800
	printf("ft_recursive_factorial(12) = %d\n", 
		ft_recursive_factorial(12)); // Expected: 479001600
	// F(13) overflow on 32-bit int systems. 
	//(actually 6,227,020,800)
	printf("ft_recursive_factorial(13) = %d\n", 
		ft_recursive_factorial(13)); 
	return 0;
}*/
