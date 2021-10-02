#include <stdio.h>
void calculate(int n, int k)
{
    int and_max = 0;
    int or_max = 0;
    int xor_max = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int and = i & j;
            if (and > and_max && and < k)
                and_max = and;
            int or = i | j;
            if (or > or_max && or < k)
                or_max = or ;
            int xor = i ^ j;
            if (xor > xor_max && xor < k)
                xor_max = xor;
        }
    }
    printf("%d\n",and_max);
    printf("%d\n",or_max);
    printf("%d",xor_max);
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    calculate(n, k);
    return 0;
}