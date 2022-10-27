/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:49:41 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/27 19:39:29 by tjaasalo         ###   ########.fr       */
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
	size_t	start;
	size_t	end;
	size_t	size;
	char	*result;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == end--)
		size = 0;
	else
	{
		while (ft_strchr(set, s1[end]))
			end--;
		size = end - start + 1;
	}
	result = malloc(sizeof(char) * (size + 1));
	if (result)
	{
		if (!size)
			*result = '\0';
		else
			ft_strlcpy(result, &s1[start], size + 1);
	}
	return (result);
}
