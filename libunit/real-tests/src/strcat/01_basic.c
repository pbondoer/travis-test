/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:28:31 by pbondoer          #+#    #+#             */
/*   Updated: 2017/02/13 00:38:34 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		strcat_basic(void)
{
	static char temp[14] = {'S', 'a', 'l', 'u', 't', '\0'};
	ft_strcat(temp, " coucou!");
	if (ft_strcmp(temp, "Salut coucou!") == 0)
		return (0);
	else
		return (-1);
}
