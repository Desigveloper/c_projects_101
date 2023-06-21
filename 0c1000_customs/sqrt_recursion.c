#include <stdio.h>

int _sqrt_recursion(int);
int sqrt_helper_func(int, int);

int main(void)
{
    int result = _sqrt_recursion(16777216);
    printf("%d\n", result);
    return (0);
}

int _sqrt_recursion(int n)
{
        if (n < 0) /* error case */
        {
                return (-1);
        }

        else if (n == 0 || n == 1) /* base case */
        {
                return (n);
        }

        return (sqrt_helper_func(n, 0)); /* recursive call */
}


/**
 * sqrt_helper_func - a recursive helper function that takes three arguments
 * @iNum: param1, an integer
 * @iStart: param2, the starting point
 * @iEnd: param3: the ending point.
 *
 * Return: n or the dermined value aftersearch
 */

int sqrt_helper_func(int iNum, int iRoot)

{
        if (iRoot * iRoot == iNum) /* found the sqrt */
        {
                return (iRoot);
        }
        else if (iRoot * iRoot > iNum) /* search in the lower half */
        {
                return (- 1);
        }
        else /* search in the upper half */
        {
                return (sqrt_helper_func(iNum, iRoot + 1));
        }
} 
