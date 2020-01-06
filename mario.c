#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int pyramid;
    int blanks;
    int hex;
    int input;
    int hax;
    
    do
    {
        input = get_int("Enter number from 1 to 8\n");
    }
    while (input > 8 || input <= 0);  
    
    for (pyramid = 0; pyramid < input; pyramid++)
    {
       
        for (blanks = 0; blanks < (input - pyramid) - 1; blanks++)
        {
            printf(" ");
        }
        
        for (hex = 0; hex < pyramid + 1; hex++)
        {
            printf("#");
        }
           
        printf("  ");
        
        for (hax = 0; hax < pyramid + 1; hax++)
        {
            printf("#");
        }
               
        printf("\n");
        
    }
}
