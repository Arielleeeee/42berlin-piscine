/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:06:00 by tulee             #+#    #+#             */
/*   Updated: 2025/03/11 12:30:36 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	*range = malloc(len * sizeof(int));
	if (!(*range))
		return (-1);
	i = 0;
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}

/*int	main()
{
	int	*range;
	int	size;

	size = ft_ultimate_range(&range, 2, 5);
	printf("size: %d\n pointer: %p\n", size, (void *)range);
	return (0);
}//*/
