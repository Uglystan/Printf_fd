/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:04:39 by abourdon          #+#    #+#             */
/*   Updated: 2023/04/05 11:06:42 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(int fd, const char *str, ...);
void	ft_putnbr(int n, int *len, int fd);
void	ft_putchar(char c, int *len, int fd);
void	ft_putstr(char *str, int *len, int fd);
void	ft_putnbr_unsi(unsigned int n, int *len, int fd);
void	ft_putnb_base(unsigned int n, char *base, int *len, int fd);
void	ft_putvoid(void *ptr, int *len, int fd);

#endif