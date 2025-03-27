/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:36:21 by tulee             #+#    #+#             */
/*   Updated: 2025/03/10 09:42:31 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	i = 1;
	while (i <= nb)
	{
		res *= i;
		i ++;
	}
	return (res);
}

/*int	main()
{
	printf("%d", ft_iterative_factorial(3));
	return (0);
}*/
