/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:42:27 by tulee             #+#    #+#             */
/*   Updated: 2025/02/26 20:37:22 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;
	int		is_upal;
	char	s;

	i = 0;
	while (str[i])
	{
		s = str[i];
		is_upal = (s >= 'A' && s <= 'Z');
		if (!is_upal)
			return (0);
		i++;
	}
	return (1);
}
/*int   main(void)
{
        char    *t1 = "";
        char    *t2 = "HELLO";
        char    *t3 = "Hello";
        char    *t4 = "HELLO WORLD";
        char    *t5 = "HELLO123";
        char    *t6 = "HELLOWORLD!";

        printf("Test t1: \"%s\" returns %d\n", t1, ft_str_is_uppercase(t1));
        printf("Test t2: \"%s\" returns %d\n", t2, ft_str_is_uppercase(t2));
        printf("Test t3: \"%s\" returns %d\n", t3, ft_str_is_uppercase(t3));
        printf("Test t4: \"%s\" returns %d\n", t4, ft_str_is_uppercase(t4));
        printf("Test t5: \"%s\" returns %d\n", t5, ft_str_is_uppercase(t5));
        printf("Test t6: \"%s\" returns %d\n", t6, ft_str_is_uppercase(t6));

        return (0);
}*/
