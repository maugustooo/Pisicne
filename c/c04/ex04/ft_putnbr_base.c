/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:23:40 by maugusto          #+#    #+#             */
/*   Updated: 2023/12/30 12:34:15 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	len_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	have_error(char *base)
{
	int	i;
	int	j;
	int	leng;

	leng = len_base(base);
	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] >= 127)
			return (0);
		j = i + 1;
		while (j < leng)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		leng;
	int		error;
	long	nb;

	error = have_error(base);
	leng = len_base(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < leng)
			ft_putchar(base[nb]);
		if (nb >= leng)
		{
			ft_putnbr_base(nb / leng, base);
			ft_putnbr_base(nb % leng, base);
		}
	}
}

int main()
{
	ft_putnbr_base(-2147483648, "0123456789");
    write(1, "\n", 1);
	ft_putnbr_base(12, "0");
	write(1, "\n", 1);
	ft_putnbr_base(-133, "01");
	write(1, "\n", 1);
	ft_putnbr_base(4341431, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(24134, "poneyvif");
	write(1, "\n", 1);
}