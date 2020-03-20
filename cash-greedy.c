#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{  
    
    
        float dollars;
        int coins;

        do
        {

        dollars =get_float("change:");
        coins = round(dollars * 100);
        }
        while (dollars < 0);

        int q = 0; //quarter (25)
        int d = 0; //dimes (10)
        int n = 0; //nickels (5)
        int p = 0; //pennies (1)
      
        int c = coins;
        
        while(c >= 25)
        {
            c -= 25;
            q ++;
        }
        while(c >= 10)
        {
            c -= 10;
            d ++;
        }
        while(c >= 5)
        {
            c -= 5;
            n ++;
        }
        while(c >= 1)
        {
            c -= 1;
            p ++;
        }

  

        printf("%i\n", q + d + n + p);   
        
       
   
}
