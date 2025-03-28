/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: lhenriqu <lhenriqu@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/10/11 09:54:23 by lhenriqu          #+#    #+#             */
/*   Updated: 2024/10/11 09:54:23 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
