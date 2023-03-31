#include <stdio.h>

int main()
{
    int i = 0;
even:
    i += 2;//i=i+2;
    if (i <= 10)
    {
        printf("%d ", i);
        goto even;
    }
    return 0;
}
