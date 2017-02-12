/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 09:58:55 by pbondoer          #+#    #+#             */
/*   Updated: 2017/02/13 00:41:23 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "101_basic_tests.h"
#include "libft.h"
#include <limits.h>

int		main(int argc, char **argv)
{
	static t_unit_list *list = NULL;

	(void)argc;
	unit_add_suite(&list, "atoi", atoi_launcher());
	unit_add_suite(&list, "putstr", putstr_launcher());
	unit_add_suite(&list, "putnbr", putnbr_launcher());
	unit_add_suite(&list, "strlen", strlen_launcher());
	unit_add_suite(&list, "strcat", strcat_launcher());
	return (unit_run_all(list, argv[0]));
}
