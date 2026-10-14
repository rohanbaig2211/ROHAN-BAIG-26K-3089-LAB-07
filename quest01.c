#include <stdio.h>
int main()
{

    int products[5][2] =
        {

            {2, 100},
            {2, 200},
            {3, 500},
            {2, 250},
            {1, 300}

    };
    int i, j;
    int grand_total = 0;
    for (i = 0; i < 5; i++)
    {
        int product_total = 1;
        for (j = 0; j < 2; j++)
        {
            printf("%d\t\t", products[i][j]);
            product_total *= products[i][j];
        }
        grand_total += product_total;
        printf("%d\t", product_total);

        printf("\n");
    }
    printf("%d\t", grand_total);

    return 0;
}