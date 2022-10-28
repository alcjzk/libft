/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:12:14 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/28 16:43:27 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c2;

	while (n-- > 0)
	{
		c2 = *(unsigned char *)s++;
		if ((unsigned char)c == c2)
			return ((void *)--s);
		if (!c2)
			break;
	}
	return (NULL);
}
