/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   101_basic_tests.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 10:00:18 by pbondoer          #+#    #+#             */
/*   Updated: 2017/02/13 00:42:12 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIC_TESTS_H
# define BASIC_TESTS_H

# include "libunit.h"

/*
** strlen tests
*/

t_unit_suite	*strlen_launcher(void);
int				strlen_basic(void);
int				strlen_zero(void);
int				strlen_null(void);

/*
** atoi tests
*/

t_unit_suite	*atoi_launcher(void);
int				atoi_basic(void);
int				atoi_negative(void);
int				atoi_whitespace(void);
int				atoi_minmax(void);

/*
** putstr tests
*/

t_unit_suite	*putstr_launcher(void);
int				putstr_basic(int *p);
int				putstr_long(int *p);
int				putstr_null(void);

/*
** putnbr tests
*/

t_unit_suite	*putnbr_launcher(void);
int				putnbr_positive(int *p);
int				putnbr_negative(int *p);
int				putnbr_limits(int *p);

/*
** strcat
*/

t_unit_suite	*strcat_launcher(void);
int				strcat_basic(void);
int				strcat_empty(void);
#endif
