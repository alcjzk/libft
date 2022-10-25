/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:00:43 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/25 10:16:45 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize-- <= 0)
		return (0);
	i = ft_strlen(dst);
	while (*src)
	{
		if (i < dstsize)
			dst[i++] = *src++;
	}
	dst[i] = '\0';
	return (i);
}
