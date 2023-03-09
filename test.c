#include "Header.h"

void sort_arg(char* arg)
{
    for (char* p = arg; p < arg + strlen(arg) - 1; p++)
    {
        for (char* q = arg; q < arg + strlen(arg) - 1; q++)
        {
            if (*q < *(q + 1))
            {
                char temp = *q;
                *q = *(q + 1);
                *(q + 1) = temp;
            }
        }
    }
}


int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++) {
        sort_arg(argv[i]);
        printf("sorted arg %d: %s\n", i, argv[i]);
    }
    return 0;
}