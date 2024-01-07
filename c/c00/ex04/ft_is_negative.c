/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:30:56 by maugusto          #+#    #+#             */
/*   Updated: 2023/12/15 10:55:37 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letra;

	if (n >= 0)
	{
		letra = 'P';
		write(1, &letra, 1);
	}
	else
	{
		letra = 'N';
		write(1, &letra, 1);
	}
}
