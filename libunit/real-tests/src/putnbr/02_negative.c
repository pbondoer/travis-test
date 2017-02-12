/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_negative.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 09:56:17 by pbondoer          #+#    #+#             */
/*   Updated: 2017/02/13 00:17:51 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"

int		putnbr_negative(int *p)
{
	ft_putnbr(-1234);
	return (unit_assert_output(p, "-1234"));
}
