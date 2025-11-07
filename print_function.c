/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:49:01 by ldepenne          #+#    #+#             */
/*   Updated: 2025/11/07 10:23:13 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		len += write(1, &s[i], 1);
		i++;
	}
	return (len);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnb_base(int n, char *base)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	if (n == -2147483648)
	{
		i = write(1, "-2147483648", 12);
		return (i);
	}
	while (base[size])
		size++;
	if (n >= 10)
		ft_putnb_base(n / size, base);
	i += ft_putchar(base[n % size]);
	return (i);
}

int	ft_putnb_unsigned_base(unsigned long n, char *base)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (base[size])
		size++;
	if (n >= 10)
		i += ft_putnb_unsigned_base(n / size, base);
	i += ft_putchar(base[n % size]);
	return (i);
}

int	ft_printptr(void *ptr)
{
	int	len;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len = write(1, "0x", 2);
	len += ft_putnb_unsigned_base((long)ptr, "0123456789abcdef");
	return (len);
}
