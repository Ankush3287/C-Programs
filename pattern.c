#include <stdio.h>
int main()
{
    int n, length, start, end;
    scanf("%d", &n);
    length = 2 * n - 1;
    start = 0;
    end = length - 1;
    int a[length][length];
    while (n != 0)
    {
        /* code */
        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {

                if (i == start || i == end || j == start || j == end)
                {
                    a[i][j] = n;
                }
            }
        }
        start++;
        end--;
        n--;
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
