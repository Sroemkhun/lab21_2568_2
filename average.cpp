#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Please input numbers to find average.\n");
        return 0;
    }

    double sum = 0.0;
    int i;

    for (i = 1; i < argc; i++)
    {
        sum += atof(argv[i]);
    }

    double avg = sum / (argc - 1);

    printf("---------------------------------\n");

    if (fabs(avg - (int)avg) < 0.000001)
        printf("Average of %d numbers = %d\n", argc - 1, (int)avg);
    else
        printf("Average of %d numbers = %.3f\n", argc - 1, avg);

    printf("---------------------------------\n");

    return 0;
}
