/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** 
*/

int my_strlen(char const *str)
{
    int c = 0;

    while (str[c] != '\0') {
        c = c + 1;
    }
    return c;
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && 0 < n) {
        dest[i] = src[i];
        i++;
        n = n - 1;
    }
    if (i > n) {
        dest[i] = '\0';
    }
    return (dest);
}
