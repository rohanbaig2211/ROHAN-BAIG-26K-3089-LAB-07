#include<stdio.h>
int main()
{
    int n = 8 ;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
         if(j % 4 == 0)
         {
            printf("0");
         } 
         else
         {
            printf("1");
         }
        }
        printf("\n");
    }
    

    return 0 ;
}


























// #include<stdio.h>
// int main()
// {
//     int n = 8 ;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i-1; j++)
//         {
//          if(j==4 || j==8)
//          {
//             printf("0");
//          } 
//          else
//          {
//             printf("1");
//          }
//         }
//         printf("\n");
//     }
    

//     return 0 ;
// }