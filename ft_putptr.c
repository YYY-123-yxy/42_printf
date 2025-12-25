/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:44:58 by ziyang            #+#    #+#             */
/*   Updated: 2025/12/25 19:35:31 by ziyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_puthexa_lower(unsigned long n)
{
        int     i;
        char    *base;

        i = 0;
        base = "0123456789abcdef";
        if (n >= 16)
        {
                i += ft_puthexa_lower(n / 16);
        }
        write(1, base + (n % 16), 1);
        i++;
        return (i);
}     

int	ft_putptr(void *ptr)
{
	int	i;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	i = 2;
	i += ft_puthexa_lower((unsigned long)ptr);
	return (i);
}
/*
#include <stdint.h>
int	main(void)
{
	void *ptr = (void *)-1;
	ft_putptr(ptr);
	printf("\n %p",(void *)-1);
//	printf("%p\n", (void *)LONG_MIN);
//	printf("%p\n", (void *)INT_MIN);
//	printf("%p\n %p\n", (void *)ULONG_MAX, (void *)-ULONG_MAX);
}
*/
