/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:09:22 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/11 17:13:24 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]) == 1)
			nb++;
		i++;
	}
	return (nb);
}
