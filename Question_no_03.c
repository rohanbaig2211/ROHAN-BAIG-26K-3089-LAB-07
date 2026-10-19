#include <stdio.h>
int main()
{
    int r , c ;
    printf("Enter number of row : ");
    scanf("%d",&r);
    printf("Enter number of column : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("ENTER FIRST MATRIX : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r ; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // -------------------------------------------------------------------------------------------
    
    printf("ENTER SECOND MATRIX : \n");
    int brr[2][2];
    for (int i = 0; i < r ; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r ; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            printf("%d\t", brr[i][j]);
        }
        printf("\n");
    }
    int sum[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            sum[i][j] = arr[i][j] + brr[i][j];
        }
    }

    // -------------------------------------------------------------------------------------------------

    printf("SUM OF TWO MATRIX IS : \n");
    for (int i = 0; i < r ; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}