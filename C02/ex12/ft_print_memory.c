/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:20:02 by tulee             #+#    #+#             */
/*   Updated: 2025/02/26 18:11:06 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	print_hex_addr(unsigned long addr)
{
	char	*hex_dig;
	char	new_hex_addr[16];
	int		i;

	hex_dig = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		new_hex_addr[i] = hex_dig[addr % 16];
		addr /= 16;
		i--;
	}
	write (1, new_hex_addr, 16);
}
/*
	write converted addres to new_hex_addr, start from the right to left
	0000 0000 0000 00ab
	new_hex_addr[15]=hex[171 % 16]	hex[11]	b
	addr = 171/16 = 10
	new_hex_addr[14]=hex[10 % 16]	hex[10]	a
*/

void	print_hex_con(unsigned char c)
{
	char	*hex_dig;
	char	new_hex_char[2];

	hex_dig = "0123456789abcdef";
	new_hex_char[0] = hex_dig[c / 16];
	new_hex_char[1] = hex_dig[c % 16];
	write (1, new_hex_char, 2);
}
/*
	write converted value	decimal to hexadecimal
	one byte at once
	z.B: B	66(dec)
	new[  ]= [66/16]=[4 ]
	new[  ]= [66%16]=[ 2]
*/

void	print_hex_value(unsigned char *str, int i, int size)
{
	int	j;

	j = 0;
	while (j < 16)
	{
		if (i + j < size)
			print_hex_con(str[i + j]);
		else
			write (1, "  ", 2);
		if (j % 2 == 1)
			write (1, " ", 1);
		j++;
	}
}

void	print_ascii(unsigned char *str, int i, int size)
{
	int		j;
	char	c;

	j = 0;
	while (j < 16 && (i + j) < size)
	{
		c = str[i + j];
		if (c >= ' ' && c <= '~')
			write (1, &c, 1);
		else
			write (1, ".", 1);
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_hex_addr((unsigned long)(str + i));
		write (1, ": ", 2);
		print_hex_value(str, i, size);
		print_ascii(str, i, size);
		write (1, "\n", 1);
		i += 16;
	}
	return (addr);
}
/*
	size / 16 = i
	size % 16 = j
	i will be 0 = row1; 16 = row2.
	i + j = where am I
	str.+ i	str + 0	the first place of the string
	
	else:	size = 17
		i = 16 j = 2 print space
		in this case i + j > size
	j % 2 == 1 every two byte fill one space
	j % 3 == 2 every three byte fill one space*/
/*int main(void)
{
	char test_str[] = {
	'H', 'e', 'l', 'l', 'o', ' ', '4', '2', '!', '\n',
	'\t', 'T', 'a', 'b', 'b', 'e', 'd', '.', '\0'
	};
	unsigned int size = sizeof(test_str);

	ft_print_memory(test_str, size);
	return (0);
}*/
