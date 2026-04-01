#include <stdio.h>
#include <stdlib.h>

void konversiSuhu(){
    int kon, versi;
    float suhu, hasil;

    printf("===============\nMasukan suhu = ");
    scanf("%f", &suhu);

    printf("---------------\nKonversi \n1. Celcius\n2. Fahreinheit\n3. Kelvin\n= ");
    scanf("%d", &kon);

    switch (kon) {
    case 1:
        printf("---------------\nMenjadi \n1. Fahreinheit\n2. Kelvin\n= ");
        scanf("%d", &versi);
        if (versi == 1)
            hasil = (suhu * 9/5) + 32;
        else if (versi == 2)
            hasil = suhu + 273;
        else
            hasil = suhu;
        break;
    case 2:
        printf("---------------\nMenjadi \n1. Celcius\n2. Kelvin\n= ");
        scanf("%d", &versi);
        if (versi == 1)
            hasil = (suhu - 32) * 5 / 9;
        else if (versi == 2)
            hasil = (suhu - 32) * 5 / 9 + 273;
        else
            hasil = suhu;
        break;
    case 3:
        printf("---------------\nMenjadi \n1. Celcius\n2. Fahreinheit\n= ");
        scanf("%d", &versi);
        if (versi == 1)
            hasil = suhu - 273;
        else if (versi == 2)
            hasil = (suhu - 273) * 9 / 5 + 32;
        else
            hasil = suhu;
        break;
    default:
        break;
    }

    if (hasil == suhu)
        printf("Tolong input ulang");
    else
        printf("---------------\n%.2f\n", hasil);
}

void konversiJarak(){}
void konversiBerat(){}
void konversiWaktu(){}

int main(){
    int pilihan;

    do {
        printf("\n === KALKULATOR KONVERSI SATUAN ===\n");
        printf("1. konversi suhu\n");
        printf("2. konversi jarak\n");
        printf("3. konversi berat\n");
        printf("4. konversi waktu\n");

        scanf("%d", &pilihan);

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
        printf("Tekan Enter untuk melanjutkan...");
        getchar();
        getchar();
    } while(pilihan != 5);
    return 0;
}