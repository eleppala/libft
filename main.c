/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:01:37 by eleppala          #+#    #+#             */
/*   Updated: 2023/10/24 17:30:27 by eleppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("isalpha %d\n", ft_isalpha('z'));
	printf("isalpha %d\n", ft_isalpha('f'));
	printf("isalpha NOT %d\n\n", ft_isalpha('4'));

	printf("isdigit %d\n", ft_isdigit('2'));
	printf("isdigit NOT %d\n\n", ft_isdigit('a'));

	printf("isalnum %d\n", ft_isalnum('a'));
	printf("isalnum %d\n", ft_isalnum('1'));
	printf("isalnum NOT %d\n\n", ft_isalnum(';'));
	
	printf("isascii %d\n", ft_isascii('a'));
	printf("isascii NOT  %d\n\n", ft_isascii(128));
	
	printf("isprint %d\n", ft_isprint('a'));
	printf("isprint %d\n\n", ft_isprint(12));

	printf("tolower %c\n", ft_tolower('A'));
	printf("tolower %c\n\n", ft_tolower('a'));

	printf("toupper %c\n", ft_toupper('A'));
	printf("toupper %c\n\n", ft_toupper('a'));

	printf("strlen Hello %zu\n", ft_strlen("Hello"));
	printf("strlen hell %zu\n\n", ft_strlen("hell"));

	char *ret; 
	ret = ft_strchr("hellojello", 'j');
	printf("hellojello,  %s\n\n", ret);
	
	ret = ft_strrchr("hellojello", 'l');
	printf("hellojello, %s\n\n", ret);

	printf("strncmp hello jello: %d\n", ft_strncmp("hello", "jello", 3));
	printf("strncmp hello hello: %d\n", ft_strncmp("hello", "hello", 5));
	printf("strncmp hello hellh: %d\n", ft_strncmp("hello", "hellh", 5));
	printf("strncmp hello hellouuu: %d\n", ft_strncmp("hello", "hellouuu", 6));
}
