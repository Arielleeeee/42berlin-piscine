#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	result;

	result = 0;
	while (*charset)
	{
		if (c == *charset)
		{
			result = 1;
			return result;
		}
		charset++;
	}
	return result;
}

int	count_tokens(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str)
		{
			count++;
			while (*str && !is_sep(*str, charset))
			str++;
        }
    }
    return count;
}

char *copy_token(char *start, int len)
{
    char *token;
    int i;
    token = malloc((len + 1) * sizeof(char));
    if (!token)
        return 0;
    i = 0;
    while (i < len)
    {
        token[i] = start[i];
        i++;
    }
    token[i] = '\0';
    return token;
}

char **ft_split(char *str, char *charset)
{
    char **arr;
    int nb, i, len;
    char *start;
    nb = count_tokens(str, charset);
    arr = malloc((nb + 1) * sizeof(char *));
    if (!arr) return 0;
    i = 0;
    while (*str)
    {
        while (*str && is_sep(*str, charset)) str++;
        if (*str)
        {
            start = str; len = 0;
            while (str[len] && !is_sep(str[len], charset)) len++;
            arr[i] = copy_token(start, len);
            if (!arr[i]) return 0;
            i++; str = str + len;
        }
    }
    arr[i] = 0; return arr;
}
