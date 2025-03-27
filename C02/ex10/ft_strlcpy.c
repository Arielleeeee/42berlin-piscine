/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:50:37 by tulee             #+#    #+#             */
/*   Updated: 2025/02/25 19:54:11 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*int	main()
{
	char src[] = "Hello, World!";
	char dest[10];

	unsigned int result = ft_strlcpy(dest, src, sizeof(dest));

	printf("Source: '%s'\n", src);
	printf("Destination: '%s'\n", dest);
	printf("Length of source: %u\n", result);
	printf("Size of destination buffer: %lu\n", sizeof(dest));

	return 0;
}*/
