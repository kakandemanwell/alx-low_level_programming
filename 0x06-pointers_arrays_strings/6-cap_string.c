#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 * Return: the resulting string with all words capitalized
 */

char *cap_string(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] = str[i] - 32;
    }

    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}')
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }
        i++;
    }

    return str;
}

