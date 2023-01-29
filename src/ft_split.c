/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:55:18 by tjaasalo          #+#    #+#             */
/*   Updated: 2023/01/30 01:43:52 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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
		return (TRUE);
	split->inner = ft_calloc(split->length, sizeof(char *));
	if (!split->inner)
		return (FALSE);
	if (!create_split(split, str, delimeter))
	{
		ft_split_free(split);
		return (FALSE);
	}
	return (TRUE);
}

void	ft_split_free(t_split *split)
{
	size_t	idx;

	if (split && split->inner)
	{
		idx = 0;
		while (idx < split->length)
		{
			if (split->inner[idx])
			{
				free(split->inner[idx]);
				split->inner[idx++] = NULL;
			}
			idx++;
		}
		free(split->inner);
		split->inner = NULL;
		split->length = 0;
	}
}

void	ft_split_iter(t_split *split, void (*func)(char *))
{
	size_t	idx;

	idx = 0;
	while (idx < split->length)
	{
		func(split->inner[idx++]);
	}
}

void	ft_split_iter_param(
			t_split *split,
			void (*func)(char *, void *),
			void *param)
{
	size_t	idx;

	idx = 0;
	while (idx < split->length)
	{
		func(split->inner[idx++], param);
	}
}
