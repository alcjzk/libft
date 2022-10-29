/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tests.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 03:57:57 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/29 04:50:14 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

/*
**	Compares the result of two int to int functions, given the same value.
*/
bool	ft_ifnicmp(int (*f1)(int), int (*f2)(int), int value, bool print_ok);

/*
**	Calls `ft_ifnicmp` with all values within the inclusive range `start`..`end`.
*/
bool	ft_ifnicmp_range(int (*f1)(int), int (*f2)(int), int start, int end, bool print_ok);

/*
**	Calls `ft_ifnicmp` with all values in the given array.
*/
bool	ft_ifnicmp_arr(int (*f1)(int), int (*f2)(int), int *arr, size_t len, bool print_ok);