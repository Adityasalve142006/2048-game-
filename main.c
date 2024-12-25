// main.c
#include "game2048.h"

int main()
{
    char input;
    srand(time(NULL));

    initializeGrid();

    while (1)
    {
        printGrid();

        if (!canMove())
        {
            printf("Game Over! No more moves available.\n");
            break;
        }

        printf("Enter your move: ");
        scanf(" %c", &input);

        if (input == 'q')
        {
            printf("Game Quit. Thanks for playing!\n");
            break;
        }

        if (input == 'w' || input == 'a' || input == 's' || input == 'd')
        {
            move(input);
        }
        else
        {
            printf("Invalid input! Use W/A/S/D to move.\n");
        }
    }

    return 0;
}
