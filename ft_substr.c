/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:25:59 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/26 15:40:29 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates (with malloc(3)) and returns a substring from the string ’s’.
**	The substring begins at index ’start’ and is of	maximum size ’len’.
**
**	Return values:
**	- The substring.
**	- NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	size;

	size = len + 1;
	result = malloc(sizeof(char) * size);
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s[start], size);
	return (result);
}
