/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:49:01 by ldepenne          #+#    #+#             */
/*   Updated: 2025/11/05 15:02:09 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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

int	print_str(const char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		len += write(1, &s[i], 1);
		i++;
	}
	return (len);
}

int	print_nbr(long long n)
{
	int	len;

	len = 0;
	if (n == -9223372036854775807)
	{
		write(1, "-9223372036854775807", 21);
		return (21);
	}
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		print_nbr(n / 10);
		// ('0' + n % 10);
	}
	// else
		// ft_putchar(n + '0');
//test
	return (0);
}
