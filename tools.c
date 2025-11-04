/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:49:01 by ldepenne          #+#    #+#             */
/*   Updated: 2025/11/04 17:49:39 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prinf.h"

int	print_percent(const char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == '%' && s[i + 1] == '%')
	{
		len += write(1, "%", 1);
		i += 2;
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (len);
}
