#include <stdio.h>

void print_fibonacci(int n);

int main(void)
{
    print_fibonacci(98);
    return (0);
}

void print_fibonacci(int n)
{
    int i, j, carry, temp;
    int num1[5000] = {0}, num2[5000] = {0}, result[5000] = {0};

    num2[0] = 1; 

    for (i = 2; i <= n; i++) 
    {
        carry = 0;
        for (j = 0; j < 5000; j++)
        {
            temp = num1[j] + num2[j] + carry;
            result[j] = temp % 10;
            carry = temp / 10;
        }
        for (j = 0; j < 5000; j++)
        {
            num1[j] = num2[j];
            num2[j] = result[j];
        }

        printf("%d", num2[4999]);
        for (j = 4998; j >= 0; j--)
        {
            if (num2[4999] != 0 || j < 4999)
            {
                printf("%d", num2[j]);
            }
        }
        printf(", ");
    }
    printf("\n");
}
