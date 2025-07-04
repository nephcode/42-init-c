#include <stdio.h>

#include <stdlib.h>

int main(int argc, char *argv[])
{
    char chaine[] = "Salut"; // Tableau de 6 char pour stocker S-a-l-u-t + le \0
    //compilateur add \0

    // Affichage de la chaîne grâce au %s du printf
    printf("%s\n", chaine);

    return 0;// arrete de dire que je code hein c'est pas facile.
}
