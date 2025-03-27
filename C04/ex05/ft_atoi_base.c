/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:09:16 by tulee             #+#    #+#             */
/*   Updated: 2025/03/09 15:20:26 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	is_valid_arg(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
		i++;
	if (i < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	convert_digits(char *str, char *base, int base_len, int *i)
{
	int	result;
	int	digit;
	int	j;

	result = 0;
	while (str[*i])
	{
		digit = -1;
		j = 0;
		while (base[j])
		{
			if (base[j] == str[*i])
			{
				digit = j;
				break ;
			}
			j++;
		}
		if (digit == -1)
			break ;
		result = result * base_len + digit;
		(*i)++;
	}
	return (result);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' 
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	neg;
	int	base_len;

	if (!is_valid_arg(base))
		return (0);
	base_len = 0;
	while (base[base_len])
		base_len++;
	i = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	neg = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	return (convert_digits(str, base, base_len, &i) * neg);
}

/*int main(void)
{
    printf("ft_atoi_base(\"  -42\", \"0123456789\") = %d\n", 
	ft_atoi_base("  -42", "0123456789"));
    printf("ft_atoi_base(\"1010\", \"01\") = %d\n", 
	ft_atoi_base("1010", "01"));
    printf("ft_atoi_base(\"1A\", \"0123456789ABCDEF\") = %d\n", 
	ft_atoi_base("1A", "0123456789ABCDEF"));
    printf("ft_atoi_base(\"   +123abc\", \"0123456789\") = %d\n", 
	ft_atoi_base("   +123abc", "0123456789"));
    printf("ft_atoi_base(\"42\", \"0\") = %d\n", 
	ft_atoi_base("42", "0"));
    printf("ft_atoi_base(\"42\", \"01234+6789\") = %d\n", 
	ft_atoi_base("42", "01234+6789"));
    printf("ft_atoi_base(\"42\", \"0123446789\") = %d\n", 
	ft_atoi_base("42", "0123446789"));
    return 0;
}*/
