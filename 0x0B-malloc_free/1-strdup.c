#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - dupicate to string
 * @str: the string to duplicate
 * Return: the string duplicated
 */
char *_strdup(char *str)

if (str == NULL)
return (NULL);
while (str[i])
{
i++;
}
S = malloc((sizeof(char) * i) + 1);
if (s == NULL)
return (NULL);
while (a < i)
{
s[a] = str[a];
a++;
}
s[a] = '\0';
return (s);
}
