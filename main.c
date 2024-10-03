#include <stdio.h>

int main() {
    int giorno, mese, anno;
    printf("Inserisci il giorno (GG): ");
    scanf("%d", &giorno);
    printf("Inserisci il mese (MM): ");
    scanf("%d", &mese);
    printf("Inserisci l'anno (AAAA): ");
    scanf("%d", &anno);

    int giorniNelMese;

    switch (mese) {
        case 4:
        case 6:
        case 9:
        case 11:
            giorniNelMese = 30;
        break;
        case 2:
            if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) {
                giorniNelMese = 29; // Anno bisestile
            } else {
                giorniNelMese = 28; // Anno non bisestile
            }
        break;
        default:
            giorniNelMese = 31;
    }

    if (mese < 1 || mese > 12 || giorno < 1 || giorno > giorniNelMese) {
        printf("La data %02d/%02d/%04d non è corretta.\n", giorno, mese, anno);
    } else {
        printf("La data %02d/%02d/%04d è corretta.\n", giorno, mese, anno);
    }

    return 0;
}
