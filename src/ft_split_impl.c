/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_impl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 01:48:55 by tjaasalo          #+#    #+#             */
/*   Updated: 2023/01/30 03:09:34 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_split_impl.h"

size_t	split_length(char *str, char delimeter)
{
	size_t	length;

	length = 0;
	while (TRUE)
	{
		while (*str == delimeter)
			str++;
		if (!*str)
			return (length);
		length++;
		while (*str && *str != delimeter)
			str++;
	}
}

BOOL	create_split(t_split *split, char *str, char delimeter)
{
	size_t	idx;
	size_t	offset;

	idx = 0;
	while (idx < split->length)
	{
		while (*str == delimeter)
			str++;
		offset = 0;
		while (str[offset] && str[offset] != delimeter)
			offset++;
		split->inner[idx] = ft_substr(str, 0, offset);
		if (!split->inner[idx])
			return (FALSE);
		idx++;
		str += offset;
	}
	return (TRUE);
}
