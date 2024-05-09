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

int funcao_2 (void)
{
	va_arg();
}

int	ft_printf(const char *str, ...)
{
	va_list lst_arg;
	int		count;

	va_start(lst_arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			funcao_2();
		}
		else
		{
			ft_putchar()
		}
	}
	va_end(lst_arg);
}

int	main(void)
{
	va_list lst_arg;


}
