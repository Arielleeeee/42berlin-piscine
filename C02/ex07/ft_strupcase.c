/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:07:21 by tulee             #+#    #+#             */
/*   Updated: 2025/02/25 17:44:04 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;
	int	diff;

	diff = 'a' - 'A';
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - diff;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	test1[] = "hello, world!";
	char	test2[] = "12345";
	char	test3[] = "Hello World";
	char	test4[] = "Café";
	char	test5[] = "";

	printf("Original: '%s'\n", test1);
	printf("Uppercase: '%s'\n\n", ft_strupcase(test1));

	printf("Original: '%s'\n", test2);
	printf("Uppercase: '%s'\n\n", ft_strupcase(test2));

	printf("Original: '%s'\n", test3);
	printf("Uppercase: '%s'\n\n", ft_strupcase(test3));

	printf("Original: '%s'\n", test4);
	printf("Uppercase: '%s'\n\n", ft_strupcase(test4));

	printf("Original: '%s'\n", test5);
	printf("Uppercase: '%s'\n\n", ft_strupcase(test5));

	return 0;
}*/
