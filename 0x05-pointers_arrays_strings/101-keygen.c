#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8  // you can change the length as needed

int main(void)
{
    srand(time(NULL));  // initialize the random number generator

    char password[PASSWORD_LENGTH + 1];  // +1 for the null byte

    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        // Generate random character in the printable ASCII range
        password[i] = rand() % (126 - 33 + 1) + 33;
    }

    password[PASSWORD_LENGTH] = '\0';  // null-terminate the string

    printf("%s\n", password);

    return 0;
}
