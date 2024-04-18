/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:21:07 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/18 15:41:01 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char sep)
{
	int	count;

	if (!*str)
		return (0);
	count = 1;
	while (*str)
	{
		if (*str == sep && *(str + 1) != 0)
			count++;
		str++;
	}
	return (count);
}

static size_t	ft_word_lenght(const char *str, char sep)
{
	size_t	len;

	len = 0;
	while (*str != sep && *str)
	{
		len++;
		str++;
	}
	return (len);
}

static void	*ft_free(char **arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	auto char **sarr;
	auto int i, words, start, wlen;
	words = ft_count_words(s, c);
	sarr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!sarr)
		return (NULL);
	i = 0;
	start = 0;
	while (i < words)
	{
		wlen = ft_word_lenght(&s[start], c);
		sarr[i] = ft_substr(s, start, wlen);
		if (!sarr[i])
		{
			ft_free(sarr, i);
			return (NULL);
		}
		start += wlen + 1;
		i++;
	}
	sarr[i] = NULL;
	return (sarr);
}
/*
#include <stdio.h>
 int main() {
    char str[] = "ola mundo maluco!";
    char charset = ' ';
    char **result = ft_split(str, charset);
 	printf("string:%s\n", str);
    printf("Split result:\n");
    for (int i = 0; result[i] != NULL; i++)
    	printf("%s\n", result[i]);
    ft_free(result, ft_count_words(str, charset) + 1);
    return 0;
}*/