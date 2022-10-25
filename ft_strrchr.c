/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:53:29 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/25 11:02:02 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	while (*s)
	{
		if (*s == (char)c)
			result = (char *)s;
		s++;
	}
	if (c == '\0')
		result = (char *)s;
	return (result);
}
