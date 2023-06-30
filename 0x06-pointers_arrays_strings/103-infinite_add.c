#include "main.h"
/**
 * infinite_add - a function that adds two numbers
 * @n1: number1
 * @n2: number2
 * @r: stores the result
 * @size_r: buffers size
 * Return: Results
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = size_r - 1;

    while (i >= 0 || j >= 0)
    {
        int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit = sum % 10;

        if (k < 0)
        {
            return 0;
        }

        r[k] = digit + '0';
        i--;
        j--;
        k--;
    }

    if (carry != 0)
    {
        if (k < 0)
        {
            return 0;
        }
        r[k] = carry + '0';
        k--;
    }

    if (k < 0)
    {
        return 0;
    }

    r[k] = '\0';

    return r + k;
}
