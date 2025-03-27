/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:55:23 by tulee             #+#    #+#             */
/*   Updated: 2025/02/25 14:38:12 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		is_lowal;
	char	s;

	i = 0;
	while (str[i])
	{
		s = str[i];
		is_lowal = (s >= 'a' && s <= 'z');
		if (!is_lowal)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	*t1 = "";
	char	*t2 = "hello";
	char	*t3 = "Hello";
	char	*t4 = "hello world";
	char	*t5 = "hello123";
	char	*t6 = "helloworld!";

	printf("Test t1: \"%s\" returns %d\n", t1, ft_str_is_lowercase(t1));
	printf("Test t2: \"%s\" returns %d\n", t2, ft_str_is_lowercase(t2));
	printf("Test t3: \"%s\" returns %d\n", t3, ft_str_is_lowercase(t3));
	printf("Test t4: \"%s\" returns %d\n", t4, ft_str_is_lowercase(t4));
	printf("Test t5: \"%s\" returns %d\n", t5, ft_str_is_lowercase(t5));
	printf("Test t6: \"%s\" returns %d\n", t6, ft_str_is_lowercase(t6));

	return (0);
}*/
