/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:17:13 by ziyang            #+#    #+#             */
/*   Updated: 2025/12/25 00:24:50 by ziyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int     ft_format(char signe, va_list args);
int     ft_putchar(char c);
int     ft_puthexa_lower(unsigned long n);
int     ft_puthexa_upper(unsigned long n);
int     ft_putnbr(long n);
int     ft_putptr(void *ptr);
int     ft_putstr(char *s);
int     ft_putunsigned_u(unsigned int n);

#endif
