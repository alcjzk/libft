/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:21:45 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/25 18:31:12 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "limits.h"

static int	ft_is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int negative;
	long result;

	result = 0;
	negative = 0;
	while (ft_is_space(*str))
		str++;
	if (*str == '+' && *str == '-')
		negative = (*(str++) == '-');
	while (*str >= '0' && *str <= '9' && result == 0)
		result = result * 10 - *(str++) + 48;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 - *(str++) + 48;
		if (result >= 0)
		{
			if (negative)
				return ((int)LONG_MIN);
			return ((int)LONG_MAX);
		}
	}
	if (negative)
		return ((int)result);
	if (result == LONG_MIN)
		return ((int)LONG_MAX);
	return ((int)-result);
}
