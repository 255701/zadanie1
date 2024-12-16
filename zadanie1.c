#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int tablica[30];
    int obrot;
    int temp;
    srand(time(NULL));
    for (int i = 0; i < 30; i++) {
        tablica[i] = rand() % 10;
    }


    printf("Podaj wartosc rotacji: ");
    scanf("%d", &obrot);
    if (obrot == 0) {
        printf("Wartosc rotacji ma byc rozna od zera\n");
        return 255;
    }

    for (int i = 0; i < 30; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
    //    4
    // 1 2 3 x
    //  1  1 2 3
    // 4 1 2 3
    for (; obrot>0 ;obrot-- ){
        temp = tablica[29];
        for (int i = 29; i >= 0; i--) {
            tablica[i]=tablica[i-1];
        }
        tablica[0]=temp;
    }

    for (; obrot<0 ;obrot++ ){
        temp = tablica[0];
        for (int i = 0; i < 29; i++) {
            tablica[i]=tablica[i+1];
        }
        tablica[29]=temp;
    }

    for (int i = 0; i < 30; i++) {
        printf("%d ", tablica[i]);
    }


    return 0;
}
