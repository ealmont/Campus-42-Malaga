/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealmonte <ealmonte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:05:06 by ealmonte          #+#    #+#             */
/*   Updated: 2024/10/07 17:18:15 by ealmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*copy_word(const char *start, int len)
{
	char	*word;
	int		i;

	word = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static char	**free_words(char **words, int i)
{
	while (i > 0)
		free(words[--i]);
	free(words);
	return (NULL);
}

static char	**split_words(char **words, const char *s, char c)
{
	const char	*start;
	int			i;
	int			len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		start = s;
		len = 0;
		while (*s && *s != c)
		{
			s++;
			len++;
		}
		if (len > 0)
		{
			words[i] = copy_word(start, len);
			if (!words[i++])
				return (free_words(words, i));
		}
	}
	words[i] = NULL;
	return (words);
}

char	**ft_split(const char *s, char c)
{
	int		word_count;
	char	**words;

	word_count = count_words(s, c);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	return (split_words(words, s, c));
}
/*
int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Hello world this is a test", ' ');
	i = 0;
	while (result && result[i])
	{
		printf("Word %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
