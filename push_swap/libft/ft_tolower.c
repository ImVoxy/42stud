/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:48:38 by alpascal          #+#    #+#             */
/*   Updated: 2021/04/08 15:48:40 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 0 && c <= 255)
	{
		if (c >= 65 && c <= 90)
			return (c += 32);
	}
	else
		return ((unsigned int)c);
	return (c);
}
