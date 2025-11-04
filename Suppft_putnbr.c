/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:09:10 by ldepenne          #+#    #+#             */
/*   Updated: 2025/11/04 14:03:39 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//a mettre dans libft
#include <stdlib.h>
char	ft_putchar(char c)
{

}
size_t	ft_putnbr(long long n)
{

	if (n == -9223372036854775807)
	{
		len = write(1, "-9223372036854775807", 21);
		return ();
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar('0' + n % 10);
	}
	else
		ft_putchar(n + '0');
}
