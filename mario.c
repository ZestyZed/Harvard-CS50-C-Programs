#include <stdio.h>
#include <cs50.h>
 
int main(void)
{
    // Initializing variables
    int height;
    int rows;
    int spaces;
    int hash;
 
    do
    {
        printf("Please choose a pyramid size from 0 to 23:");
        height = GetInt();
    }
    while ((height < 0) || (height > 23));
    
    for (rows = 1; rows <= height; rows++) 
    {
        for (spaces = (height - rows); spaces > 0; spaces--)
        {
            printf(" "); 
        }
 
        for (hash = 1; hash <= (rows + 1); hash++)
        {   
            printf("#"); 
        }
 
        printf("\n");
    }
    return 0;
}
