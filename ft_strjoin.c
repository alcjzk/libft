/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:41:15 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/26 15:48:31 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates (with malloc(3)) and returns a new string, which is the result of
**	the concatenation of ’s1’ and ’s2’.
**
**	Return value:
**	- The new string.
**	- NULL if the allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	size;
	size_t	i;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = malloc(sizeof(char) * size);
	if (!result)
		return (NULL);
	i = ft_strlcpy(result, s1, size);
	ft_strlcat(&result[i], s2, size - i);
	return (result);
}
