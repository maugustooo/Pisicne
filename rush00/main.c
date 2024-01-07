/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:16:08 by bschwell          #+#    #+#             */
/*   Updated: 2023/12/16 14:47:01 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	char2int(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (result + str[i] - '0' >= 2147483647)
				return (2147483647);
			result = result + str[i] - '0';
		}
		else
			return (0);
		if (str[i + 1] != '\0' && str[i + 1] >= '0' && str[i + 1] <= '9')
		{
			if (result + str[i] - '0' >= 2147483647)
				return (2147483647);
			result = result * 10;
		}
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		rush(char2int(argv[1]), char2int(argv[2]));
	}
	return (0);
}
