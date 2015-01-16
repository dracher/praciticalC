#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    void *ptd;

    ptd = (double *)malloc(99999999999999 * sizeof(double));

    if (ptd == NULL)
    {
        printf("NULL\n");
    }

    printf("%p\n", ptd);

    return 0;
}
