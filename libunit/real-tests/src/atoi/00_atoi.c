/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 09:52:04 by pbondoer          #+#    #+#             */
/*   Updated: 2017/02/12 23:48:14 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "101_basic_tests.h"
#include "libunit.h"
#include <signal.h>

t_unit_suite		*atoi_launcher(void)
{
	static t_unit_suite *suite = NULL;

	if (suite)
		return (suite);
	unit_add_test(&suite, "Basic", &atoi_basic, 0);
	unit_add_test(&suite, "Negative", &atoi_negative, 0);
	unit_add_test(&suite, "Whitespace", &atoi_negative, 0);
	unit_add_test(&suite, "Min/max", &atoi_negative, 0);
	return (suite);
}
