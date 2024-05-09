/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:25:05 by toferrei          #+#    #+#             */
/*   Updated: 2024/05/10 00:09:48 by etom             ###   ########.fr       */
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

int		ft_printf_pf(const char *str, ...);
size_t	ft_strlen_pf(const char *str);
void	ft_putnbr_base_pf(int nbr, char *base);
void	ft_putchar_fd_pf(char c, int fd);
void	ft_putstr_fd_pf(char *s, int fd);


#endif