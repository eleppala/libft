/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:53:10 by eleppala          #+#    #+#             */
/*   Updated: 2023/10/24 16:55:13 by eleppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H 
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int ft_isprint(int c);
size_t	ft_strlen(const char *s);
int	ft_toupper(int c);
int	ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
