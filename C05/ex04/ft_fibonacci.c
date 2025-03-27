/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:17:24 by tulee             #+#    #+#             */
/*   Updated: 2025/03/09 13:50:22 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int main(void)
{
	printf("ft_fibonacci(-1) = %d\n", 
		ft_fibonacci(-1));  // Expected: -1
	printf("ft_fibonacci(0) = %d\n", 
		ft_fibonacci(0));    // Expected: 0
	printf("ft_fibonacci(1) = %d\n", 
		ft_fibonacci(1));    // Expected: 1
	printf("ft_fibonacci(2) = %d\n", 
		ft_fibonacci(2));    // Expected: 1
	printf("ft_fibonacci(3) = %d\n", 
		ft_fibonacci(3));    // Expected: 2
	printf("ft_fibonacci(4) = %d\n", 
		ft_fibonacci(4));    // Expected: 3
	printf("ft_fibonacci(5) = %d\n", 
		ft_fibonacci(5));    // Expected: 5
	printf("ft_fibonacci(10) = %d\n", 
		ft_fibonacci(10));  // Expected: 55
	return 0;
}*/
