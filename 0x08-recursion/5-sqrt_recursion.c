#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n: Number
 * Return: int
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    if (n < 0)
    {
        return -1;
    }
    if (n == 0 || n == 1)
    {
        return n;
    }
    return _sqrt_recursive_helper(n, 1, n);
}

int _sqrt_recursive_helper(int n, int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (mid * mid == n)
    {
        return mid;
    }
    else if (mid * mid > n)
    {
        return _sqrt_recursive_helper(n, start, mid - 1);
    }
    else
    {
        return _sqrt_recursive_helper(n, mid + 1, end);
    }
}
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
