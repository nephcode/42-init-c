#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char prenom[100];
    printf("Comment t'appelles-tu ? ");
    scanf("%s", prenom);
    printf("Salut %s\n, je suis heureuse de te rencontrer !\n", prenom);

    return 0;
}