#ifndef LISTECHAINEE_LSC_H
#define LISTECHAINEE_LSC_H

struct MLSC{
    // data
    int id;
    char lettre;

    // lien, link
    struct MLSC* next;
};
typedef struct MLSC MLSC;
typedef MLSC * LC;

void ajoutEnTete(LC *  pListe,  const int id,  const char lettre);
void ajoutEnFin(LC*  pListe, int id, char lettre);
void afficher (LC liste);
void freeListe(LC* pListe);


#endif
