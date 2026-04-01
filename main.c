#include <stdio.h>
#include <stdlib.h>

void konversiSuhu();
void konversiJarak();
void konversiBerat();
void konversiWaktu();

int main(){
    int pilihan;

    do {
        printf("\n === KALKULATOR KONVERSI SATUAN ===");
        printf("1. konversi suhu\n");
        printf("2. konversi jarak\n");
        printf("3. konversi berat\n");
        printf("4. konversi waktu\n");

        scanf("%d", pilihan);

        switch(pilihan) {
            case 1:
                konversiSuhu();
                break;
            case 2:
                konversiJarak();
                break;
            case 3:
                konversiBerat();
                break;
            case 4:
                konversiWaktu();
                break;
            case 5:
                printf("Terimakasih!\n");
                exit(0);
            default:
                printf("Pilihan tidak valid!\n");
        }
    } while(pilihan != 5);
    return 0;
}