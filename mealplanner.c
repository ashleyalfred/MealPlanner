#include <stdio.h>
#include <cs50.h>

int main(void)
{
int x;
    do
    {
    x = get_int ("Enter Number from 1-7: ");
    }
    
    while (x >= 7 || x <= 1);

    if (x == 1)
    {
        printf ("Monday: Eat pasta for dinner\n");
    }
    
    if (x == 2)
    {
        printf ("Tuesday: Eat curry for dinner\n");
    }
    
    if (x == 3)
    {
        printf ("Wednesday: Eat Chicken for dinner\n");
    }

    if (x == 4)
    {
        printf ("Thursday: Eat lamb for dinner\n");
    }
    
    if (x == 5)
    {
        printf ("Friday: Eat curry for dinner\n");
    }
    
    if (x == 6)
    {
        printf ("Saturday: Eat fancy dinner\n");
    }
    
    if (x == 7)
    {
        printf ("Sunday: Eat pizza for dinner\n");
    }
    
    
}




