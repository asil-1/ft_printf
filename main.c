/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:57:35 by ldepenne          #+#    #+#             */
/*   Updated: 2025/11/11 00:56:31 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	//char	*s;
	//char	c;

	//s = "la riviere";
	//c = 15;
	ft_printf("%d\n", ft_printf(" %u ", 15));
	printf("%d\n", printf(" %u ", 15));
}

// printf("%d\n", printf("%s\n", "test"));
