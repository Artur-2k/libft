/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:37:54 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/30 18:36:54 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
#include <limits.h>

# define SPECIFIERS "duipxXcs%"
# define LOW_HEXA "0123456789abcdef"
# define UP_HEXA "0123456789ABCDEF"
# define DECIMAL "0123456789"

typedef enum e_bases
{
	BASE_10 = 10,
	BASE_16 = 16,
}					t_bases;

typedef struct s_data
{
	va_list			ap;
	char			specifier;
	int				lbase;
	char			*base_symbols;
	int				n_chars;
}					t_data;

//! PROTOTYPES !//
int					ft_strchr(const char *s, int c);
void				ft_putnum_base(long long num, t_data *data);
void				ft_putstr(char *s, t_data *data);
void				ft_putchar(char c, t_data *data);
int					ft_printf(const char *fmt, ...);
#endif