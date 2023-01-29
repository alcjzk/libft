/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_impl.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 01:47:29 by tjaasalo          #+#    #+#             */
/*   Updated: 2023/01/30 01:51:07 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_IMPL_H
# define FT_SPLIT_IMPL_H

# include "ft_split.h"

///	ft_split internals; this header should not be directly #included.

size_t	split_length(char *str, char delimeter);
BOOL	create_split(t_split *split, char *str, char delimeter);

#endif
