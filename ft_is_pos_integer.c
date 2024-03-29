/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_pos_integer.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: cherrewi <cherrewi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 13:34:47 by cherrewi      #+#    #+#                 */
/*   Updated: 2023/08/01 17:52:59 by cherrewi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
check if string has format:
optionally starts with a plus '+' or minus '-' sign
only consists of digits [0-9]
is within range [1, INT_MAX]
*/
bool	ft_is_pos_integer(char *int_str)
{
	return (ft_isinteger(int_str) && ft_atoi(int_str) > 0);
}
