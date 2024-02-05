#include <stdio.h>
#include "MLSC.h"

int main() {
    LC liste=NULL;
    ajoutEnFin(&liste, 0, 'z');
    ajoutEnTete(&liste, 1, 'a');
    ajoutEnTete(&liste, 2, 'b');
    ajoutEnFin(&liste, 3, 'c');

    afficher(liste);

    freeListe(&liste);

    return 0;
}
