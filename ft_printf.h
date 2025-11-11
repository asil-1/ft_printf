/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:38:24 by ldepenne          #+#    #+#             */
/*   Updated: 2025/11/11 00:38:15 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnb_base(int n, char *base);
int	ft_putnb_base_hexa(unsigned long n, char *base);
int	ft_printptr(void *ptr);

#endif
