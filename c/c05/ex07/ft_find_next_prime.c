/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:55:40 by maugusto          #+#    #+#             */
/*   Updated: 2023/12/29 10:37:06 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
		return (0);
	while (div <= nb / div)
	{
		if (nb % div == 0)
			return (0);
		div ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) != 1)
		nb ++;
	return (nb);
}

/* int main()
{
	printf("%i", ft_find_next_prime(1));
    printf("\n%i", ft_find_next_prime(2));
    printf("\n%i", ft_find_next_prime(4));
    printf("\n%i", ft_find_next_prime(2147483647));
} */