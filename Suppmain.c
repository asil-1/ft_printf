/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Suppmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:57:35 by ldepenne          #+#    #+#             */
/*   Updated: 2025/11/04 17:51:06 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>



int	main(void)
{
	char	*s;

	s = "test";
	ft_printf("%d\n", ft_printf("%s\n", s));
	printf("%d\n", printf("%s\n", s));
}

// printf("%d\n", printf("%s\n", "test"));


// int	ft_printf(const char *s, ...)
// {
// 	va_list	vl;
// 	char	*result;
// 	int		i;
// 	int		len;

// 	if (!s)
// 		return (0);
// 	va_start(vl, s);
// 	result = (char *) va_arg(vl, char *);
// 	i = 0;
// 	len = 0;
// 	while (result[i])
// 	{
// 		len += write(1, &result[i], 1);
// 		i++;
// 	}
// 	va_end(vl);
// 	return (len);
// }


// int	main(void)
// {
// 	// char	*s;
// 	// char	c;
// 	// int	i;

// 	// s = "test : %%%%%%%%\n autre twist";
// 	// c = 'c';
// 	// i = 0;
// 	// printf("test : %%%%%%%%\n autre twist");
// 	// while (s[i] != '%')
// 	// {
// 	// 	write(1, &s[i], 1);
// 	// 	i++;
// 	// }

// 	// while (s[i] == '%' && s[i + 1] == '%')
// 	// {
// 	// 	write(1, "%", 1);
// 	// 	i += 2;
// 	// }

// 	// while (s[i])
// 	// {
// 	// 	write(1, &s[i], 1);
// 	// 	i++;
// 	// }
// 	// ft_printf("%s\n", s);
// }

// printf("%d\n", printf("%s\n", "test"));

