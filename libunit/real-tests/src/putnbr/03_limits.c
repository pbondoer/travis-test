/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_limits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 09:56:17 by pbondoer          #+#    #+#             */
/*   Updated: 2017/02/13 00:29:45 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"
#include <limits.h>

int		putnbr_limits(int *p)
{
	ft_putnbr(INT_MIN);
	ft_putnbr(INT_MAX);
	return (unit_assert_output(p, "-21474836482147483647"));
}
