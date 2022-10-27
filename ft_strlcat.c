/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:00:43 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/27 17:32:25 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*head;
	size_t	src_len;
	size_t	dst_len;
	size_t	max;

	if (!dstsize)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len > dstsize - 1)
		return (src_len + dstsize);
	max = dstsize - dst_len - 1;
	head = &dst[dst_len];
	while (max-- > 0 && *src)
		*head++ = *src++;
	*head = '\0';
	return (src_len + dst_len);
}
