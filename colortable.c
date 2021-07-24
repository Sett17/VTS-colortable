#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\x1b[2J\x1b[0;0H\x1b[1E\\x1b[{}m:\x1b[1E");
    int k = 88;
    for (int i = 0; i < 168 / 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("\x1b[%dG\x1b[38;5;%dm38;5;%03d", 1 + j * 9, k, k);
            k++;
        }
        printf("\x1b[2E");
    }
}
