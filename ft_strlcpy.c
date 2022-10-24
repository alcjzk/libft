/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:27:19 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/24 22:50:24 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize-- <= 0)
		return (0);
	while (src[i])
	{
		if (i < dstsize)
			dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
