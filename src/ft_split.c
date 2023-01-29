/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:55:18 by tjaasalo          #+#    #+#             */
/*   Updated: 2023/01/30 00:56:53 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_split.h"

static size_t	split_length(char *str, char delimeter)
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

static BOOL	create_split(t_split *split, char *str, char delimeter)
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

BOOL	ft_split(t_split *split, const char const *str, char delimeter)
{
	split->inner = NULL;
	split->length = split_length((char *)str, delimeter);
	if (split->length == 0)
		return (FALSE);
	split->inner = ft_calloc(split->length, sizeof(char *));
	if (!split->inner)
		return (FALSE);
	if (!create_split(split, str, delimeter))
		return (FALSE);
	return (TRUE);
}
