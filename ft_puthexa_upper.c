/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 23:36:36 by ziyang            #+#    #+#             */
/*   Updated: 2025/12/25 00:01:26 by ziyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_upper(unsigned long n)
{
	int	i;
	char	*base;

	i = 0;
	base = "0123456789ABCDEF";
	while (n >= 16)	
		i += ft_puthexa_upper(n / 16);
	write(1, base + (n % 16), i);
	i++;
	return (i);
}
