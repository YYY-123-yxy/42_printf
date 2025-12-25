/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:08:13 by ziyang            #+#    #+#             */
/*   Updated: 2025/12/25 00:06:16 by ziyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char signe, va_list args)
{
	int	i;

	i = 0;
	if (signe == 'c')
		i += ft_putchar(va_arg(args, char));
	else if (signe == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (signe == 'd' || signe == 'i')
		i += ft_putnbr(va_arg(args, long));
	else if (signe == 'p')
		i += ft_putptr(va_arg(args, void *));
	else if (signe == 'u')
		i += ft_putunsigned_u(va_arg(args, unsigned int));
	else if (signe == 'x')
		i += ft_puthema_lower(va_arg(args, unsigned long));
	else if (signe == 'X')
		i += ft_puthema_upper(va_arg(args, unsigned long));
	else if (signe == '%')
		i += write(1, &signe, 1);
	return (i);
}
