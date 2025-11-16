#include <stdio.h>

int main()
{
    int n, m;

    while (scanf("%d %d", &n, &m) != EOF)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] < a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        int b;
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &b);
            printf("%d\n", a[b - 1]);
        }
    }

    return 0;
}
