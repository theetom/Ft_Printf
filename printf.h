/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:25:05 by toferrei          #+#    #+#             */
/*   Updated: 2024/05/09 15:25:07 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *str);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);


#endif