#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main()
{
    int b, o, m;
    
    printf("minutes:");
    m = GetFloat();
    o = (m * 192);
    b = (o / 16);
    printf("bottle: %d \n", b);
}
