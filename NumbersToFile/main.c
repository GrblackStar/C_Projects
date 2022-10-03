#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void NnumbersN ()
{
    FILE *fptr;
    fptr = fopen ("binary1.bin", "wb");
    if (fptr==NULL)
    {
        printf("Error opening file");
        exit (1);
    }

    int i;
    int N = 0;
    int t;

    printf("enter how many numbers you want to include: ");
    scanf("%d", &N);
    for (t=0; t<N; t++)
    {
        scanf ("%d", &t);
        fprintf (fptr, "%d", t);
    }

    fclose (fptr);


    fptr = fopen ("binary1.bin", "rb");
    if (fptr==NULL)
    {
        printf("Error opening file");
        exit (1);
    }
    char array[N];

    for (i=N; )
}






int main()
{

    return 0;
}
