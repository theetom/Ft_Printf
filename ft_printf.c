/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:25:18 by toferrei          #+#    #+#             */
/*   Updated: 2024/05/09 15:25:19 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*create lists with arguments
pritn string char by char untill 

%c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.



*/
#include "printf.h"

int funcao_2 (va_list lst_arg, int prt)
{
	size_t	x;

	x = 0;
	if (prt == 'c')
		ft_putchar_fd(va_arg(lst_arg, int), 1);
	if (prt == 'i' || prt == 'd')
		ft_putnbr_base(va_arg(lst_arg, int), "0123456789");
	return (x);
}

int	ft_printf(const char *str, ...)
{
	va_list lst_arg;
	size_t	count;

	count = 0;
	va_start(lst_arg, str);
	while (*str)
	{
		if (*str == '%')
			count += funcao_2(lst_arg, *(++str));
		else
		{
			ft_putchar_fd(*str, 1);
			count++;
		}
		str++;
	}
	va_end(lst_arg);
	return (count);
}

int	main(void)
{
	int	x;
	x = ft_printf("Vamos tentar escrever isso: %d", 123456);
	return (x);

}
