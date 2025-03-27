/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:53:54 by tulee             #+#    #+#             */
/*   Updated: 2025/03/04 16:31:06 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

//first * = dereferencing ->get the character value
//second * = because s1 and s2 self  is a pointer

/*int	main(void)
{
	char s1[]= "hell";
	char s2[]= "hello";
	char s3[]= "hello";
	char s4[]= "hellp";
	char s5[]= "Hello";
	char s6[]= "hello!";
	char s7[]= "hello?";
	char s8[]= "\n";
	char s9[]= "\0";// '\n' > '\0'
	char s10[]= "\xFF";//('\xFF' = 255 > 'A' = 65)
	char s11[]= "A";

	
	printf("compare \"%s\" and \"%s\": %d\n", s1, s2, ft_strcmp(s1, s2));
	printf("compare \"%s\" and \"%s\": %d\n", s2, s3, ft_strcmp(s2, s3));
	printf("compare \"%s\" and \"%s\": %d\n", s3, s4, ft_strcmp(s3, s4));
	printf("compare \"%s\" and \"%s\": %d\n", s2, s5, ft_strcmp(s2, s5));
	printf("compare \"%s\" and \"%s\": %d\n", s6, s7, ft_strcmp(s6, s7));
	printf("compare \"%s\" and \"%s\": %d\n", s8, s9, ft_strcmp(s8, s9));
	printf("compare \"%s\" and \"%s\": %d\n", s10, s11, ft_strcmp(s10, s11));
	return (0);
}*/
