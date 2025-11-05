/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:10:24 by ldepenne          #+#    #+#             */
/*   Updated: 2025/11/05 15:03:51 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "printf.h"

int	ft_printf(const char *s, ...)
{
	int	i;
	int	len;

	if (!s)
		return (0);
	i = 0;
	len = 0;
	while (s[i] != '%' && s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	if (s[i] == '%' && s[i + 1] == '%')
		len = print_percent(s);
	if(s[i] == '%' && s[i + 1] == 's')
		len = print_str(s);
	len += i;
	return (len);
}
