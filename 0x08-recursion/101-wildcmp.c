#include "main.h"

int wildcmp(char *s1, char *s2)
{
    /* Base case, when both strings reach to the end */
    if (*s1 == '\0' && *s2 == '\0')
        return 1;

    /* If the current character of s2 is '*', then there are two possibilities
     * a) We consider current character of s2
     * b) We ignore current character of s2
     */
    if (*s2 == '*')
        return ((*s1 != '\0' && wildcmp(s1 + 1, s2)) || wildcmp(s1, s2 + 1));

    /* If the current character of s1 and s2 match */
    if (*s1 == *s2)
        return wildcmp(s1 + 1, s2 + 1);

    return 0;
}
