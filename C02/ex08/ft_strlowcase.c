/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:44:45 by tulee             #+#    #+#             */
/*   Updated: 2025/02/25 18:02:22 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	int	is_upal;
	int	diff;

	diff = 'a' - 'A';
	i = 0;
	while (str[i])
	{
		is_upal = (str[i] >= 'A' && str[i] <= 'Z');
		if (is_upal)
		{
			str[i] = str[i] + diff;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char test1[] = "HELLO, WORLD!";
	char test2[] = "12345";
	char test3[] = "Hello World";
	char test4[] = "Café";
	char test5[] = ""; // Empty string

	printf("Original: '%s'\n", test1);
	printf("Lowercase: '%s'\n\n", ft_strlowcase(test1));

	printf("Original: '%s'\n", test2);
	printf("Lowercase: '%s'\n\n", ft_strlowcase(test2));

	printf("Original: '%s'\n", test3);
	printf("Lowercase: '%s'\n\n", ft_strlowcase(test3));

	printf("Original: '%s'\n", test4);
	printf("Lowercase: '%s'\n\n", ft_strlowcase(test4));

	printf("Original: '%s'\n", test5);
	printf("Lowercase: '%s'\n\n", ft_strlowcase(test5));

	return 0;
}*/
