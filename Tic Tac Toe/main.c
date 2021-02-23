#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void displayGridDefault()
{
    for (int i = 1; i <= 9; i++)
    {
        printf("\t%d\t|%s", i, (i % 3 == 0) ? "\n" : "");
    }
}

void displayGrid(int game[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            switch (game[i][j])
            {
            case 1:
                printf("\tX\t|");
                break;
            case 0:
                printf("\t0\t|");
                break;
            case -1:
                printf("\t \t|");
                break;
            }
        }
        printf("\n");
    }
}

void play(int game[3][3])
{
    int player = 1;
    int playerChoice = 0;

    while (1)
    {
        printf("Player %d :", player);
        scanf("%d", &playerChoice);
    }
}

int main()
{
    int game[3][3] =
        {{1, 1, 1},
         {1, 1, 1},
         {1, 1, 1}};

    return 0;
}