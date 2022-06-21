#include "main.h"
#include <stdlib.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string parameter
 * @needle: substring parameter
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
        while (*needle && *needle != '\0')
        {
                while (*haystack && *haystack != '\0')
                {
                        if (*haystack == *needle)
                        {
                                return (haystack);
                        }
                        haystack++;
                }
                needle++;
        }
        return (NULL);
}
