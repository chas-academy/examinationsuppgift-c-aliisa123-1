#include <stdio.h>
#include <string.h>
#include <ctype.h>

char name[5][11];
int scores[5][13];

int main()
{

    for (int i = 0; i < 5; i++)
    {
        scanf("%s", name[i]);

        for (int j = 0; j < 13; j++)
        {
            scanf("%d", &scores[i][j]);
        }
    }
    for (int i= 0; i< 5; i++){
        name[i][0] = toupper(name[i][0]);
        for (int j = 1; j < strlen(name[i]); j++) {
        name[i][j] = tolower(name[i][j]);
        }
    }
    float average[5];
    float totalsum = 0;

    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 13; j++){
            sum += scores[i][j]; }
        average[i] = (float)sum / 13;
        totalsum += average[i];
    }

int bestscore =0;
for (int i = 1;i < 5; i++){
    if (average[i] > average[bestscore]){
        bestscore= i;
    }
}

    float studentsAverages = totalsum / 5;

    printf("%s\n", name[bestscore]);

    for (int i = 0; i < 5; i++)
    {
        if (average[i]< studentsAverages){
            printf("%s\n", name[i]);
        }
    }
    return 0;
}