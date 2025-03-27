/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:54:21 by tulee             #+#    #+#             */
/*   Updated: 2025/02/25 12:37:54 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest [i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	s1[] = "Hello, world!";
	char	d1[50];

	ft_strcpy(d1, s1);
	printf("Test 1:\n");
	printf("Source:      \"%s\"\n", s1);
	printf("Destination: \"%s\"\n", d1);

	char	s2[] = "";
	char	d2[50];

	ft_strcpy(d2, s2);
	printf("\nTest 2:\n");
	printf("Source:      \"%s\"\n", s2);
	printf("Destination: \"%s\"\n", d2);

	char	s3[] = "A longer string, with spaces and punctuation!";
	char	d3[100];

	ft_strcpy(d3, s3);
	printf("\nTest 3:\n");
	printf("Source:      \"%s\"\n", s3);
	printf("Destination: \"%s\"\n", d3);

	return 0;
}*/
