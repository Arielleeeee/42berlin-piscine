/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:26:37 by tulee             #+#    #+#             */
/*   Updated: 2025/03/05 10:47:54 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	if (!str)
		return (0);
	while (str[str_len])
	{
		str_len++;
	}
	return (str_len);
}
/*int	main()
{
	char str[50] = "\0";

	printf("%lu vs. %d\n", strlen(str), ft_strlen(str));
	return (0);
}*/
