/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 09:52:04 by pbondoer          #+#    #+#             */
/*   Updated: 2017/02/13 00:31:04 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "101_basic_tests.h"
#include "libunit.h"
#include <signal.h>

t_unit_suite		*putnbr_launcher(void)
{
	static t_unit_suite *suite = NULL;

	if (suite)
		return (suite);
	unit_add_test_output(&suite, "Positive", &putnbr_positive, 0);
	unit_add_test_output(&suite, "Negative", &putnbr_negative, 0);
	unit_add_test_output(&suite, "Limits", &putnbr_limits, 0);
	return (suite);
}
