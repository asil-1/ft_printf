/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:57:35 by ldepenne          #+#    #+#             */
/*   Updated: 2025/11/09 11:30:56 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	// char	*s;
	// char	c;

	// s = "la riviere";
	// c = ULONG_MAX;
	// ft_printf(" %d ", -10);
	printf("%d\n", ft_printf(" %d ", INT_MIN));
	// printf(" %d ", -10);
	printf("%d\n", printf(" %d ", INT_MIN));
}

// printf("%d\n", printf("%s\n", "test"));
