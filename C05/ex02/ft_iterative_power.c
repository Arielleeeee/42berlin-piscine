/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:16:43 by tulee             #+#    #+#             */
/*   Updated: 2025/03/10 11:54:37 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	res = nb;
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

/*int	main()
{
	printf("%d\n", ft_iterative_power(-2, 2));
	return (0);
}*/
