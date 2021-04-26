#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "queue.h"

int main()
{
    PtQueue printerQueue = queueCreate();

    char input[100], owner[50];
    int pages;

    while (true)
    {
        printf("$>");
        readString(input, 100);

        if (strcmp(input, "exit") == 0)
        {
            printf("Exit.\n");
            break;
        }
        else if (strcmp(input, "add") == 0)
        {
            //...
        }
        else if (strcmp(input, "next") == 0)
        {
            //...
        }
        else if (strcmp(input, "print") == 0)
        {
            //...
        }
        else if (strcmp(input, "status") == 0)
        {
            //...
        }
        else
        {
            printf("\nUnknown command.\n");
        }
    }

    queueDestroy(&printerQueue);

    return EXIT_SUCCESS;
}