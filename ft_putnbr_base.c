/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:51:04 by toferrei          #+#    #+#             */
/*   Updated: 2024/05/09 11:05:27 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_invalid(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j] || str[j] == '+' || str[j] == '-')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		b;
	long	nb;

	nb = nbr;
	b = ft_strlen(base);
	if (ft_invalid (base) == 1 || b < 1)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > b - 1)
	{
		ft_putnbr_base(nb / b, base);
		ft_putnbr_base(nb % b, base);
	}
	else
		write(1, &base[nb], 1);
}
