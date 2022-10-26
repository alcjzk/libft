/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:21:45 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/26 12:31:56 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_trim_start(char **str)
{
	char	c;

	c = **str;
	while ((c >= '\t' && c <= '\r') || c == ' ')
		c = *(*str)++;
	if (c == '+' || c == '-')
		(*str)++;
	while (**str == '0')
		(*str)++;
	return (c == '-');
}

int	ft_atoi(const char *str)
{
	char	c;
	long	result;
	int		negative;

	result = 0;
	negative = ft_trim_start(&str);
	c = *str++;
	while (ft_isdigit(c))
	{
		result = result * 10 - c + 48;
		if (negative && result >= 0)
			return ((int)LONG_MIN);
		if (!negative && result - 1 >= 0)
			return ((int)LONG_MAX);
		c = *str++;
	}
	if (negative)
		return ((int)result);
	return ((int)-result);
}
