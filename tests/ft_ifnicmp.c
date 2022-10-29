/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifnicmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 03:57:57 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/29 04:43:43 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tests.h"
#include <stdio.h>

/*
**	Compares the result of two int to int functions, given the same value.
*/
bool	ft_ifnicmp(int (*f1)(int), int (*f2)(int), int value, bool print_ok)
{
	int r1 = f1(value);
	int r2 = f2(value);

	if (r1 == r2)
	{
		if (print_ok)
			printf(".");
		return (true);
	}
	printf("[FAIL] value: %i, f1=%i, f2=%i\n", value, r1, r2);
	return (false);
}

/*
**	Calls `ft_ifnicmp` with all values within the inclusive range `start`..`end`.
*/
bool	ft_ifnicmp_range(int (*f1)(int), int (*f2)(int), int start, int end, bool print_ok)
{
	while (start < end)
	{
		if (!ft_ifnicmp(f1, f2, start++, print_ok))
			return (false);
	}	
	return (ft_ifnicmp(f1, f2, start++, print_ok));
}

/*
**	Calls `ft_ifnicmp` with all values in the given array.
*/
bool	ft_ifnicmp_arr(int (*f1)(int), int (*f2)(int), int *arr, size_t len, bool print_ok)
{
	while (len-- > 0)
		if (!ft_ifnicmp(f1, f2, *arr++, print_ok))
			return (false);
	return (true);
}
