/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:33:37 by tulee             #+#    #+#             */
/*   Updated: 2025/02/25 17:01:43 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	int		is_print;
	char	s;

	i = 0;
	while (str[i])
	{
		s = str[i];
		is_print = (s >= ' ' && s <= '~');
		if (!is_print)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	test1[] = "Hello, World!";
	char	test2[] = "Hello\tWorld";
	char	test3[] = "12345";
	char	test4[] = "Hello\nWorld";
	char	test5[] = "";
	char	test7[] = "Hello\x7FWorld";

	printf("'%s' is printable: %d\n", test1, ft_str_is_printable(test1));
	printf("'%s' is printable: %d\n", test2, ft_str_is_printable(test2));
	printf("'%s' is printable: %d\n", test3, ft_str_is_printable(test3));
	printf("'%s' is printable: %d\n", test4, ft_str_is_printable(test4));
	printf("'%s' is printable: %d\n", test5, ft_str_is_printable(test5));
	printf("'%s' is printable: %d\n", test7, ft_str_is_printable(test7));

	return 0;
}*/
