#include "tard.h"
#include <stdio.h>

int main()
{
    init_tard();

    printf("Welcome to Libtard: The Game!\nType 'q' to exit, press enter to start playing: ");

    int c = getchar();
    while (c)
    {
        switch (c) {
            case 'q':
                c = 0;
                break;
            case '\n':
            default:
                fflush(stdout);
                printf("\n%s\nInput (type 'q' to exit, press enter to keep playing): ", tard());
                c = getchar();
                break;
        }
    }
}