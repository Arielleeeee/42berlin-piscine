/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:56:22 by tulee             #+#    #+#             */
/*   Updated: 2025/02/25 13:26:47 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int main(void)
{
	char	src1[] = "Hello";
	char	dest1[20];

	ft_strncpy(dest1, src1, 10);
	printf("Test 1:\n");
	printf("Source: \"%s\", n = 10\n", src1);
	printf("Destination: \"%s\"\n\n", dest1);

	char	src2[] = "Hello, world!";
	char	dest2[20];

	ft_strncpy(dest2, src2, 5);
	printf("Test 2:\n");
	printf("Source: \"%s\", n = 5\n", src2);
	printf("Destination (using precision specifier): \"%.5s\"\n", dest2);

	dest2[5] = '\0';
	printf("Destination (after manual null termination): \"%s\"\n\n", dest2);

	char	src3[] = "";
	char	dest3[20];
	ft_strncpy(dest3, src3, 10);

	printf("Test 3:\n");
	printf("Source: \"%s\", n = 10\n", src3);
	printf("Destination: \"%s\"\n", dest3);

	return 0;
}*/
