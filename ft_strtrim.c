/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:49:41 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/26 16:22:18 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
**	specified in ’set’ removed from the beginning and the end of the string.
**
**	Return value:
**	- The trimmed string.
**	- NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*pos;

	result = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!result)
		return (NULL);
	pos = ft_strchr(set, *s1++);
	while (pos && *pos)
		pos = ft_strchr(set, *s1++);
	while (!pos)
	{
		pos = ft_strchr(set, *s1);
		*(result++) = *s1++;
	}
	while (pos && *pos)
		pos = ft_strchr(set, *s1++);
	*result = '\0';
	return (result);
}
