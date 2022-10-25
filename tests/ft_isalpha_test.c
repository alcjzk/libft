/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:58:58 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/24 16:49:59 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int	cmp_fn(int c)
{
	if (isalpha(c) == ft_isalpha(c))
		return (1);
	return (0);
}

int	main(void)
{
	int	c;

	c = -255;
	{
	while (c <= (int)UCHAR_MAX)
		if (!cmp_fn(c))
		{
			printf("TEST FAILED FOR c=%i\n", c);
			return (0);
		}
		c++;
	}
	if (!cmp_fn(INT_MAX))
	{
		printf("TEST FAILED FOR INT_MAX\n");
		return (0);
	}
	if (!cmp_fn(INT_MIN))
	{
		printf("TEST FAILED FOR INT_MIN\n");
		return (0);
	}
	printf("ALL OK\n");
	return (0);
}
