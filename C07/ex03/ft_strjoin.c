/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:32:53 by tulee             #+#    #+#             */
/*   Updated: 2025/03/11 13:57:35 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	total;
	int	i;
	int	sep_len;

	total = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		if (i < size - 1)
			total += sep_len;
		i++;
	}
	return (total);
}

void	ft_copy_strs(char *dest, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[pos++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				dest[pos++] = sep[j++];
		}
		i++;
	}
	dest[pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		total;

	if (!size)
	{
		new = malloc(sizeof(char));
		if (new)
			*new = '\0';
		return (new);
	}
	total = ft_total_len(size, strs, sep);
	new = malloc((total + 1) * sizeof(char));
	if (!new)
		return (0);
	ft_copy_strs(new, size, strs, sep);
	return (new);
}

/*int main(void)
{
	char	*strs[3];
	char	*sep;
	char	*result;

	strs[0] = "Hello";
	strs[1] = "world";
	strs[2] = "!";
	sep = " ";
	result = ft_strjoin(3, strs, sep);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}//*/
