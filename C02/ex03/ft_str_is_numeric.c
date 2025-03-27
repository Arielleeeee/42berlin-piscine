/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:29:36 by tulee             #+#    #+#             */
/*   Updated: 2025/02/25 13:48:49 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		is_dig;
	char	s;

	i = 0;
	while (str[i])
	{
		s = str[i];
		is_dig = (s >= '0' && s <= '9');
		if (!is_dig)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	*t1 = "";
	char	*t2 = "123";
	char	*t3 = "123a";
	char	*t4 = "1";
	char	*t5 = "12 3";

	printf("Test t1: \"%s\" returns %d\n", t1, ft_str_is_numeric(t1));
	printf("Test t2: \"%s\" returns %d\n", t2, ft_str_is_numeric(t2));
	printf("Test t3: \"%s\" returns %d\n", t3, ft_str_is_numeric(t3));
	printf("Test t4: \"%s\" returns %d\n", t4, ft_str_is_numeric(t4));
	printf("Test t5: \"%s\" returns %d\n", t5, ft_str_is_numeric(t5));

	return (0);
}*/
