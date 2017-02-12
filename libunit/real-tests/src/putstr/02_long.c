/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 09:56:17 by pbondoer          #+#    #+#             */
/*   Updated: 2017/02/13 00:10:04 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"

int		putstr_long(int *p)
{
	char *str;

	str = ft_strnew(1024);
	ft_memset(str, 'a', 1024);
	ft_putstr(str);
	return (unit_assert_output(p, str));
}
