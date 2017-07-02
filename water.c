#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Minutes: ");
    int n = get_int();
    
   if (n < 0)
    {
        printf("Number must be positive\n");
    }
    else
    {
         printf("Bottles: %i \n", n*12);
    }
}
   
