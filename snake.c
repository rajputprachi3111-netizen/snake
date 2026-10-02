#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int x = 5, y = 5;
    char key;

    while (1)
    {
        system("cls");

        // Draw boundary
        for (int i = 0; i < 20; i++)
            printf("#");
        printf("\n");

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                if (j == 0 || j == 19)
                    printf("#");
                else if (i == y - 1 && j == x)
                    printf("P");
                else
                    printf(" ");
            }
            printf("\n");
        }

        for (int i = 0; i < 20; i++)
            printf("#");

        printf("\nUse W A S D to move. Press Q to quit.\n");

        key = getch();

        // Move player
        if (key == 'w' && y > 1)
            y--;

        if (key == 's' && y < 9)
            y++;

        if (key == 'a' && x > 1)
            x--;

        if (key == 'd' && x < 18)
            x++;

        if (key == 'q')
            break;
    }

    return 0;
}