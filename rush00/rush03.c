/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 09:36:04 by bschwell          #+#    #+#             */
/*   Updated: 2023/12/16 14:20:43 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
// ft_dl: draws one line

void	ft_dl(int x, char firstchar, char middlechar, char lastchar)
{
	int	curr_x;

	curr_x = 1;
	while (curr_x <= x)
	{
		if (curr_x == 1)
		{
			ft_putchar(firstchar);
		}
		else if (curr_x == x)
		{
			ft_putchar(lastchar);
		}
		else
		{
			ft_putchar(middlechar);
		}
		curr_x++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	curr_row;

	curr_row = 1;
	if (x > 0 && y > 0)
	{
		while (curr_row <= y)
		{
			if (curr_row == 1 || curr_row == y)
			{
				ft_dl(x, 'A', 'B', 'C');
			}
			else
			{
				ft_dl(x, 'B', ' ', 'B');
			}
			curr_row++;
		}
	}
}
