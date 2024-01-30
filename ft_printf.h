/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkros <dkros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:21:10 by dkros             #+#    #+#             */
/*   Updated: 2023/11/21 19:30:21 by dkros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_formats(char c, va_list args);
int		ft_print_c(char c);
int		ft_print_di(int di);
int		ft_print_s(char *s);
int		ft_print_x(unsigned long num, char c);
int		ft_print_u(unsigned int u);
int		ft_print_p(void *p);

#endif
