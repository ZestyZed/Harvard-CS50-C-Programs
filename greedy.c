/* Greedy.c
Chris Zegarac
Addresses the age old problem of determining the minimal 
amount of coins for correct change.
*/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

 
int main(void)
{
    float change_f;
    int quarter, dime, nickel, penny, coins, change;
    
    quarter = 25;
    dime = 10;
    nickel = 5;
    penny = 1;
    
    do
    {
    printf("How much change is owed to to the customer?\n");
    change_f = get_float();
    }
    while(change_f < 0);
    
    // convert to rounded integer
    change = (int)(change_f*100);
    double round(double change);

    //looping to count coins
    while (change >= quarter)
    {
    coins = coins + 1;
    change = change - quarter;
    }

    while (change >= dime)
    {
    coins = coins + 1;
    change = change - dime;
    }
    
    while (change >= nickel)
    {
    coins = coins + 1;
    change = change - nickel;
    }
    
    while (change >= penny)
    {
        coins = (coins + 1);
        change = (change - penny);
    }
   
    printf("%d\n", coins);
}
