/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulee <tulee@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 11:41:09 by tulee             #+#    #+#             */
/*   Updated: 2025/03/09 12:08:05 by tulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	n;

	if (!is_valid_arg(base))
		return ;
	base_len = 0;
	while (base[base_len])
		base_len++;
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	ft_putchar(base[n % base_len]);
}

/*int main(void)
{
	ft_putnbr_base(42, "0123456789");			ft_putchar('\n');
	ft_putnbr_base(-42, "0123456789");			ft_putchar('\n');
	ft_putnbr_base(42, "01");					ft_putchar('\n');
	ft_putnbr_base(42, "0123456789ABCDEF");		ft_putchar('\n');
	ft_putnbr_base(42, "poneyvif");				ft_putchar('\n');
	ft_putnbr_base(0, "0123456789");			ft_putchar('\n');
	ft_putnbr_base(2147483647, "0123456789");	ft_putchar('\n');
	ft_putnbr_base(-2147483648, "0123456789");	ft_putchar('\n');
	ft_putnbr_base(42, "0");					ft_putchar('\n');  
		// Invalid: base too short.
	ft_putnbr_base(42, "01234+6789");			ft_putchar('\n');  
		// Invalid: contains '+'.
	ft_putnbr_base(42, "0123446789");			ft_putchar('\n');  
		// Invalid: duplicate '4'.
	return 0;
}*/
