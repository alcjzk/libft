/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:53:11 by tjaasalo          #+#    #+#             */
/*   Updated: 2023/01/30 01:00:25 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_H
# define FT_SPLIT_H

# include <stddef.h>
# include "bool.h"

typedef struct s_split
{
	char	**inner;
	size_t	length;
}	t_split;

/// @brief Splits a string by a delimiter, creating an array of substrings.
/// @param split Pointer to a split structure.
/// @param str Input string.
/// @param delimeter Delimiter used to split the string.
/// @return `TRUE` on success, `FALSE` if an error occurred.
// TODO: Document proper usage on error
BOOL	ft_split(t_split *split, const char const *str, char delimeter);

#endif
