/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 09:52:04 by pbondoer          #+#    #+#             */
/*   Updated: 2017/02/13 00:35:18 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "101_basic_tests.h"
#include "libunit.h"

t_unit_suite		*strcat_launcher(void)
{
	static t_unit_suite *suite = NULL;

	if (suite)
		return (suite);
	unit_add_test(&suite, "Basic", &strcat_basic, 0);
	unit_add_test(&suite, "Empty", &strcat_empty, 0);
	return (suite);
}
