/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:24:34 by maugusto          #+#    #+#             */
/*   Updated: 2023/12/16 17:06:09 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b; 
	*a = div;
	*b = mod;
}

// int main()
// {
// 	int x;
// 	int	y;

// 	x = 15;
// 	y = 3;
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("%d | %d", x, y);
// }