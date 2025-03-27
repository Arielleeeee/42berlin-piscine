/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:08:37 by tulee             #+#    #+#             */
/*   Updated: 2025/02/25 12:25:04 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		is_al;
	char	s;

	i = 0;
	while (str[i])
	{
		s = str[i];
		is_al = ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'));
		if (!is_al)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	*t1 = "";
	char	*t2 = "HelloWorld";
	char	*t3 = "Hello World";
	char	*t4 = "123Hello";
	char	*t5 = "1H2e3l4l5o";
	char	*t6 = "Hello!";

	printf("%s %d", t1, ft_str_is_alpha(t1));
	printf("%s·%d", t2, ft_str_is_alpha(t2)); 
	printf("%s·%d", t3, ft_str_is_alpha(t3)); 
	printf("%s·%d", t4, ft_str_is_alpha(t4)); 
	printf("%s·%d", t5, ft_str_is_alpha(t5)); 
	printf("%s·%d", t6, ft_str_is_alpha(t6));
	return (0);
}*/
