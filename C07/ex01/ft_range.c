/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:19:25 by tulee             #+#    #+#             */
/*   Updated: 2025/03/10 17:05:06 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*s;
	int	len;
	int	i;

	if (min >= max)
		return (0);
	len = max - min;
	s = malloc(len * sizeof(int));
	if (!s)
		return (0);
	i = 0;
	while (i < len)
	{
		s[i] = min + i;
		i++;
	}
	return (s);
}
/*int	main(void)
{
	int	*range;
	int	i;
	int min = 2, max = 5;

	range = ft_range(min, max);
	if (!range)
	{
		printf("ft_range(%d, %d)\n", min, max);
	}
	else
	{
		i = 0;
		while (i < max - min)
		{
			printf("%d ", range[i]);
			i++;
		}
		printf("\n");
		free(range);
	}
	return (0);
}//*/
