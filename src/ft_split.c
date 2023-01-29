/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:55:18 by tjaasalo          #+#    #+#             */
/*   Updated: 2023/01/30 01:50:09 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "ft_split_impl.h"
#include "ft_split.h"

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
