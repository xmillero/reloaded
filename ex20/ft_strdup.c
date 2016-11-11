/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:28:22 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/11 15:17:47 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libc.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	dest = malloc(sizeof(*dest) * size + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	if (argc > 2)
		return (-1);
	printf("src : %s <=> copie : %s\n", argv[1], ft_strdup(argv[1]));
}
