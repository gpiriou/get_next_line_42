#include "get_next_line.h"

static char *ft_strcat(char *s1, char *s2)
{
    int i;
    int s1_len;

    i = 0;
    s1_len = ft_strlen(s1);
    while (s2[i])
    {
        s1[s1_len + i] = s2[i];
        i++;
    }
    s1[s1_len + i] = 0;
    return (s1);
}

char *ft_strjoin(char *s1, char *s2)
{
    char *s3;

    if (!s1 || !s2)
        return (NULL);
    s3 = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!s3)
        return (NULL);
    *s3 = '\0';
    ft_strcat(ft_strcat(s3, s1), s2);
    return (s3);
}

unsigned int ft_strlen(char *str)
{
    unsigned int i;
    i = 0;
    if (!str)
        return (0);
    while (str && str[i])
        i++;
    return (i);
}

char *ft_strndup(char *s1, unsigned int n)
{
    unsigned int i;
    char *s1_dup;

    if (!s1)
        return (NULL);
    s1_dup = malloc((n + 1) * sizeof(char));
    i = 0;
    while (s1[i] && i < n)
    {
        s1_dup[i] = s1[i];
        i++;
    }
    s1_dup[i] = 0;
    return (s1_dup);
}

int ft_strchr(char *s, int c)
{
    unsigned int i;

    if (!s)
    {
	    // printf("debug\n");
        return (0);
    }
    i = 0;
    while (s && s[i])
    {
        if (s[i] == (char)c)
        {
            if (i == 0)
                i = 1;
            return (i);
        }
        i++;
    }
    return (0);
}