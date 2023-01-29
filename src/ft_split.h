/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:53:11 by tjaasalo          #+#    #+#             */
/*   Updated: 2023/01/30 01:43:04 by tjaasalo         ###   ########.fr       */
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
/// @return `TRUE` on success, `FALSE` if an allocation failed.
BOOL	ft_split(t_split *split, const char const *str, char delimeter);

/// @brief Deallocates the split structure.
/// @param split Split to be freed.
void	ft_split_free(t_split *split);

/// @brief Iterates over substrings of the split and executes `func` on each
///		substring.
/// @param split Split to iterate.
/// @param func Function called on each substring.
void	ft_split_iter(t_split *split, void (*func)(char *));

/// @brief Iterates over substrings of the split and executes `func` on each
///		substring. This version of the function passes an additional parameter
///		to each function call.
/// @param split Split to iterate.
/// @param func Function called on each substring.
/// @param param Parameter to pass for each function call.
void	ft_split_iter_param(
			t_split *split,
			void (*func)(char *, void *),
			void *param);

#endif
