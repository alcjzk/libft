/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:44:45 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/31 23:28:54 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	// char *ptr = strnstr(argv[1], argv[2], (size_t)atoi(argv[3]));
	char *haystack;
	char *needle;
	size_t s;
	
	haystack = ""; needle = "a"; s = 0;
	printf("libc:  %p\n", strnstr(haystack, needle, s)); printf("libft: %p\n==================\n", ft_strnstr(haystack, needle, s));
	haystack = ""; needle = "a"; s = 1;
	printf("libc:  %p\n", strnstr(haystack, needle, s)); printf("libft: %p\n==================\n", ft_strnstr(haystack, needle, s));
	haystack = ""; needle = "a"; s = 2;
	printf("libc:  %p\n", strnstr(haystack, needle, s)); printf("libft: %p\n==================\n", ft_strnstr(haystack, needle, s));

	haystack = "a"; needle = "a"; s = 0;
	printf("libc:  %p\n", strnstr(haystack, needle, s)); printf("libft: %p\n==================\n", ft_strnstr(haystack, needle, s));
	haystack = "a"; needle = "a"; s = 1;
	printf("libc:  %p\n", strnstr(haystack, needle, s)); printf("libft: %p\n==================\n", ft_strnstr(haystack, needle, s));
	haystack = "a"; needle = "a"; s = 2;
	printf("libc:  %p\n", strnstr(haystack, needle, s)); printf("libft: %p\n==================\n", ft_strnstr(haystack, needle, s));


	haystack = "ab"; needle = "b"; s = 0;
	printf("libc:  %p\n", strnstr(haystack, needle, s)); printf("libft: %p\n==================\n", ft_strnstr(haystack, needle, s));
	haystack = "ab"; needle = "b"; s = 1;
	printf("libc:  %p\n", strnstr(haystack, needle, s)); printf("libft: %p\n==================\n", ft_strnstr(haystack, needle, s));
	haystack = "ab"; needle = "b"; s = 2;
	printf("libc:  %p\n", strnstr(haystack, needle, s)); printf("libft: %p\n==================\n", ft_strnstr(haystack, needle, s));


	haystack = "a"; needle = "ab"; s = 0;
	printf("libc:  %p\n", strnstr(haystack, needle, s)); printf("libft: %p\n==================\n", ft_strnstr(haystack, needle, s));
	haystack = "a"; needle = "ab"; s = 1;
	printf("libc:  %p\n", strnstr(haystack, needle, s)); printf("libft: %p\n==================\n", ft_strnstr(haystack, needle, s));
	haystack = "a"; needle = "ab"; s = 2;
	printf("libc:  %p\n", strnstr(haystack, needle, s)); printf("libft: %p\n==================\n", ft_strnstr(haystack, needle, s));

	haystack = "see FF your FF return FF now FF"; needle = "FF"; s = 31;
	printf("libc:  %p\n", strnstr(haystack, needle, s)); printf("libft: %p\n==================\n", ft_strnstr(haystack, needle, s));
	return (0);
	
}
