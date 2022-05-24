#include <stdio.h>
#include <stdlib.h>
#include <fonctions.h>
#include <structures.h>
int z;

int main(){

    File *f=init_file();

    printf("Donner le nombre de processus: ");

    scanf("%d",&z);

    file_cree(f);

    printf("\nPush_FIFO\n");

    affiche(f);

    printf("\nPush_SJF\n");

    push_SJF(f);

    return 0;

}
