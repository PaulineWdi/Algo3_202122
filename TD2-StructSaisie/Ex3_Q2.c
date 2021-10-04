#include <stdio.h>
#define Employe 100

typedef int TabEmploye[Employe];

int saisie(int n, TabEmploye tab)
{
    for(int i=0; i>n; i++)
    {
        printf("Veuillez saisir un employe : \n");
        scanf("%d",&tab[i]);
    }
}
