#include <stdio.h>

int main() {
    int lunghezza;
    printf("inserisci lunghezza del triangolo: \n");
    scanf("%d", &lunghezza);

    for (int i = 0; i < lunghezza; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}