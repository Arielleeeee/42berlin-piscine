/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:03:03 by tulee             #+#    #+#             */
/*   Updated: 2025/02/25 18:48:54 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		is_al;
	int		upper;
	char	s;

	upper = 1;
	i = 0;
	while (str[i])
	{
		s = str[i];
		is_al = (s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z');
		if (is_al || (s >= '0' && s <= '9'))
		{
			if (upper && s >= 'a' && s <= 'z')
				str[i] = str[i] - ('a' - 'A');
			else if (!upper && s >= 'A' && s <= 'Z')
				str[i] = str[i] + ('a' - 'A');
			upper = 0;
		}
		else
			upper = 1;
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char test1[] = "salut,commenttuvas742motsquarante-deux;cinquantetet+un";
	char test2[] = "hello world";
	char test3[] = "42school is awesome!";
	char test4[] = "this is a TEST";
	char test5[] = ""; // Empty string

	printf("Original: '%s'\n", test1);
	printf("Capitalized: '%s'\n\n", ft_strcapitalize(test1));

	printf("Original: '%s'\n", test2);
	printf("Capitalized: '%s'\n\n", ft_strcapitalize(test2));

	printf("Original: '%s'\n", test3);
	printf("Capitalized: '%s'\n\n", ft_strcapitalize(test3));

	printf("Original: '%s'\n", test4);
	printf("Capitalized: '%s'\n\n", ft_strcapitalize(test4));

	printf("Original: '%s'\n", test5);
	printf("Capitalized: '%s'\n\n", ft_strcapitalize(test5));

	return 0;
}*/
