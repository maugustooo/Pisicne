/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:28:46 by maugusto          #+#    #+#             */
/*   Updated: 2024/01/02 13:02:24 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	troca;

	troca = *a;
	*a = *b;
	*b = troca;
}

//   int main (void)
//  {
// 	int	x;
// 	int	y;

// 	x = 2;
// 	y = 3;
// 	ft_swap(&x, &y);
// 	printf("%d \n", x);
// 	printf("%d", y);
//  }
