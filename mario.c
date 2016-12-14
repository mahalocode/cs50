#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    //adding varible
    int h;
    int c = 0;
    do
{  
    //user enter number
     printf("enter a number: \n");
     h = GetInt();
     
    // looping for invalid height
}while(h < 0 || h > 23);

//initialization, condition, update

//looping through each condition ensure correct number is input, else keep looping until correct # is input.
for(int a = h; a > 0; a--)
{
    for(int b = 0; b < h; b++)
    {
        printf(" ");
    }
    printf("#");
    c++;
    
    
    for(int d = 0; d < c; d++)
    {
        printf("#");
    }
    printf("\n");
    }
    return 0;
}

