/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:45:47 by tulee             #+#    #+#             */
/*   Updated: 2025/03/10 16:19:00 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	int		src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	copy = malloc((src_len + 1) * sizeof(char));
	if (!copy)
		return (0);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*int	main()
{
	char	s1[50] = "abc";
	char	s2[50] = "abc";

	printf("%s vs. %s\n", ft_strdup(s1), strdup(s2));
	return (0);
}//*/
//copying the str
//malloc a place for duplicated str
