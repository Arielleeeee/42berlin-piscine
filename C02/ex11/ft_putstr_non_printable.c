/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:55:08 by tulee             #+#    #+#             */
/*   Updated: 2025/02/26 20:56:38 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hex;
	unsigned char	c;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		c = (unsigned char)str[i];
		if (str[i] >= ' ' && str[i] <= '~')
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[c / 16]);
			ft_putchar(hex[c % 16]);
		}
		i++;
	}
}
/*int main()
{
	char test1[] = "Coucou\ntu vas bien ?";
	char test2[] = "Hello\x7FWorld";
	char test3[] = "This is a test\x01\x02\x03";

	ft_putstr_non_printable(test1);
	ft_putchar('\n');

	ft_putstr_non_printable(test2);
	ft_putchar('\n');

	ft_putstr_non_printable(test3);
	ft_putchar('\n');

	return 0;
}*/
