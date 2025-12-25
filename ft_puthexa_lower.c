/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 23:28:40 by ziyang            #+#    #+#             */
/*   Updated: 2025/12/25 00:01:12 by ziyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_lower(unsigned long n)
{
	int	i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	while (n >= 16)
	{
		i += ft_puthexa_lower(n / 16);
	}
	write(1, base + (n % 16), 1);
	i++;
	return (i);
}
