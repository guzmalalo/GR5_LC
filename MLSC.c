#include "MLSC.h"
#include <stdlib.h>
#include <stdio.h>

void ajoutEnTete(MLSC** pListe, const int id, const char lettre){
    // allocation
    MLSC* nouv = (MLSC*) malloc (1*sizeof(MLSC));
    // initialisation
    nouv->id=id;
    nouv->lettre= lettre;
    nouv->next=*pListe;

    *pListe=nouv;

}

void ajoutEnFin(MLSC** const pListe, int id, char lettre){
    // Allocation
    MLSC * nouv = malloc(sizeof(MLSC));

    nouv->id = id;
    nouv->lettre= lettre;
    nouv->next = NULL;

    // pointeur parcours
    MLSC * parcours = *pListe;

    if(parcours==NULL){
        *pListe = nouv;
    }else {

        while (parcours->next != NULL) {
            parcours = parcours->next;
        }
        // on est sur d'etre à la fin

        parcours->next = nouv;
    }
}

void freeListe(MLSC ** pListe){
    MLSC * parcours;

    while (*pListe != NULL){
        // on sauvgarde son voisin
        parcours = (*pListe)->next;
        // on efface la tête
        free(*pListe);
        // la tête devient le voisin
        *pListe= parcours;
    }

}


void afficher (MLSC* m){
    MLSC* parcours=m;
    printf("HEAD \n");
    while (parcours!=NULL){
        printf ("%d\n", parcours->id);
        printf ("%c\n", parcours->lettre);
        parcours=parcours->next;
    }
    printf("TAIL\n");
}