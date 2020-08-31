/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 13:43:09 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/12 16:55:35 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isin(char const c, char const set)
{
	unsigned int i;

	i = 0;
	if (!set)
		return (0);
	if (c == set && c != 0)
		return (1);
	i++;
	return (0);
}

static char	**double_calloc(int count, size_t size)
{
	int		i;
	char	**tab;

	i = 0;
	if (!(tab = malloc(size * (count + 1))))
		return (NULL);
	while (i <= count)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}

static int	numbword(char const *s, char c)
{
	unsigned int i;
	unsigned int n;

	n = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] && isin(s[i], c) == 0)
		{
			n++;
			while (s[i] && (isin(s[i], c) == 0))
				i++;
			if (!s[i])
				i--;
		}
		i++;
	}
	return (n);
}

static char	*malword(int min, int max, char const *s)
{
	unsigned int	i;
	char			*word;

	i = 0;
	if (!(word = malloc(sizeof(char) * (max - min + 2))))
		return (NULL);
	while (min <= max)
	{
		word[i] = s[min];
		min++;
		i++;
	}
	word[i] = 0;
	return (word);
}

char		**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	f;
	char			**wordlist;

	if (!s)
		return (wordlist = malloc(0));
	i = 0;
	j = 0;
	if (!(wordlist = double_calloc(numbword(s, c), sizeof(char *))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && isin(s[i], c) == 1 && s[i])
			i++;
		f = i;
		while (s[i] && isin(s[i], c) == 0)
			i++;
		if (s[i] || (!(s[i]) && (isin(s[i - 1], c) == 0)))
			wordlist[j] = malword(f, (i - 1), s);
		j++;
	}
	return (wordlist);
}
