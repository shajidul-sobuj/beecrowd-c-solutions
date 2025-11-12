#include <stdio.h>

int main()
{
    for (;;)
    {
            int n;
            scanf("%d", &n);
            if (n!=0) {
            int a[n];
            int max1 = -100000, max2 = -100000;
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }
            for (int i = 0; i < n; i++)
            {
                if (a[i] > max1)
                {
                    max1 = a[i];
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (a[i] > max2 && a[i] < max1)
                {
                    max2 = a[i];
                }
            }
            int idx;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == max2)
                {
                    idx = i;
                }
            }
            printf("%d\n", idx + 1);
        }
        else if (n == 0)
        {
            break;
        }
    }
    return 0;
}
