#include <stdio.h>
#include <stdbool.h>

int main()
{
    int matrix[3][3];

    bool Square = true;
    bool Null = true;
    bool Diagonal = true;
    bool UpperTriangular = true;
    bool LowerTriangular = true;
    bool Identity = true;

    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (matrix[i][j] != 0)
            {
                Null = false;
            }

            if (i != j && matrix[i][j] != 0)
            {
                Diagonal = false;
            }

            if (i > j && matrix[i][j] != 0)
            {
                UpperTriangular = false;
            }

            if (i < j && matrix[i][j] != 0)
            {
                LowerTriangular = false;
            }

            if (i == j)
            {
                if (matrix[i][j] != 1)
                {
                    Identity = false;
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    Identity = false;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n    Matrix Type Analysis    \n");
    if (Square)
        printf(" Square Matrix\n");
    if (Null)
        printf(" Null Matrix\n");
    if (Diagonal)
        printf(" Diagonal Matrix\n");
    if (UpperTriangular)
        printf(" Upper Triangular Matrix\n");
    if (LowerTriangular)
        printf(" Lower Triangular Matrix\n");
    if (Identity)
        printf(" Identity Matrix\n");

    printf("\n    Matrix Elements Breakdown    \n");

    printf("Diagonal Elements: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    printf("Upper Triangular Elements:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j >= i)
            {
                printf("%d\t", matrix[i][j]);
            }
            else
            {
                printf("-\t");
            }
        }
        printf("\n");
    }

    printf("Lower Triangular Elements:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j <= i)
            {
                printf("%d\t", matrix[i][j]);
            }
            else
            {
                printf("-\t");
            }
        }
        printf("\n");
    }

    return 0;
}