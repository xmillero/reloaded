/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:32:12 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/09 11:04:13 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int r;

	i = 0;
	r = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		r = s2[i] - s1[i];
		if (r != 0)
			return (r);
		i++;
	}
	return (r);
}
