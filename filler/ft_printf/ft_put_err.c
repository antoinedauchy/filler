/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 00:12:37 by adauchy           #+#    #+#             */
/*   Updated: 2017/11/22 16:41:51 by adauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_put_err(char *str)
{
	write(1, "\033[31m", 5);
	write(1, "ERROR !\n", 8);
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
	write(1, "\033[37m", 5);
	return (-1);
}
