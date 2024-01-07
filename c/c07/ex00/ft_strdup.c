/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:49:11 by maugusto          #+#    #+#             */
/*   Updated: 2024/01/02 15:08:20 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	str_leng(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(str_leng(src) * sizeof(char));
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++; 
	}
	ptr[i] = '\0';
	return (ptr);
}

/* int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Um teste com malloc";
	printf("original  : base  : %s  %p\n\n", str, str);
	allocated = strdup(str);
	printf("copied : alloc : %s  %p\n\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : %s, %p\n", allocated, allocated);
}  */