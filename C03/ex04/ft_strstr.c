/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:55:41 by tulee             #+#    #+#             */
/*   Updated: 2025/03/04 19:50:54 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!*to_find)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char s1[50] = "def";
	char to_find1[50] = "";

	printf("%s vs. %s", strstr(s1, to_find1), ft_strstr(s1, to_find1));
	return (0);
}*/
