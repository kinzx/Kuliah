#include <stdio.h>

int main()
{
    int test[2][3][2];
    printf("Enter 12 value:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d", &test[i][j][k]);
            }
        }
    }

    printf("\nDisplay value:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
            }
        }
    }
    return 0;
}