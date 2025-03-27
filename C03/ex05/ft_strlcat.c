/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:52:20 by tulee             #+#    #+#             */
/*   Updated: 2025/03/04 20:52:13 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	j;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	dest_len = 0;
	while (dest_len < size && dest[dest_len])
		dest_len++;
	if (size <= dest_len)
		return (src_len + size);
	j = 0;
	while (src[j] && (dest_len + j) < (size - 1))
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}
/*int	main(void)
{
	char s1[50] = "bcdefgh";
	char d2[50] = "aa";

	printf("%d\n", ft_strlcat(d2, s1, 4));
	return (0);
}*/
