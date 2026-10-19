#include <stdio.h>
int main()
{
    int students[4][2];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                printf("Mid marks : %d ", i + 1);
                scanf("%d", &students[i][j]);
            }
            else
            {
                printf("Final marks : %d ", i + 1);
                scanf("%d", &students[i][j]);
            }
        }
        printf("\n");
    }

    int total_marks_mid = 0, total_marks_final = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (students[i][j] > 15)
            {
                printf("final : ");
                printf("%d", students[i][j]);
                printf("\t \t");
                total_marks_final = total_marks_final + students[i][j];
            }
            else
            {
                printf("mid : ");
                printf("%d", students[i][j]);
                printf("\t \t");
                total_marks_mid = total_marks_mid + students[i][j];
            }
        }
        printf("\n");
    }

    
    int high_mid = students[0][0], high_final = students[0][1];
    int low_mid = students[0][0], low_final = students[0][1];
    int overall_high = students[0][0], overall_low = students[0][0];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0 && students[i][j] > high_mid)
            {
                high_mid = students[i][j];
            }
            if (j == 0 && students[i][j] < high_mid)
            {
                low_mid = students[i][j];
            }

            if (students[i][j] > high_final)
            {
                high_final = students[i][j];
            }
            if (students[i][j] > high_final)
            {
                low_final = students[i][j];
            }

            if (students[i][j] > overall_high)
            {
                overall_high = students[i][j];
            }
            if (students[i][j] < overall_low)
            {
                overall_low = students[i][j];
            }
        }
        printf("\n");
    }
    float avg_mid, avg_final;

    avg_mid = total_marks_mid / 4;
    avg_final = total_marks_final / 4;
    printf("\n--------FOR MID-----------\n");
    printf("\nHighest value of mid is : %d", high_mid);
    printf("\nLowest value of mid is : %d", low_mid);
    printf("\nThe total average of mid is %.2f ", avg_mid);
    printf("\n\n--------FOR FINAL-----------\n");
    printf("\nHighest value of final is : %d", high_final);
    printf("\nLowest value of final is : %d", low_final);
    printf("\nThe total average of final is %.2f ", avg_final);
    printf("\n\n--------FOR OVERALL-----------\n");
    printf("\nOverall Highest marks of mid and final is : %d", overall_high);
    printf("\nOverall Lowest value of mid and final is : %d", overall_low);

    return 0;
}