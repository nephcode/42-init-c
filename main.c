#include <stdio.h>
#include <stdlib.h>


int main()
{
    int age = 20;

    if (age >= 18)
    {
        printf ("Vous etes majeur !\n");
    }
    elseif (age > 4 )  
    {
        printf("nope pas possible\n");
    }
    else 
    {
        printf("bla bla bla\n");
    }

    return 0;
}