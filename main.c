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
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
#define RESET "\e[0m"

void konversiSuhu() {
    int pilihan;
    float nilai, hasil;

    printf("\n-- Konversi Suhu --\n");
    printf("1. Celsius ke Fahrenheit\n");
    printf("2. Fahrenheit ke Celsius\n");
    printf("Pilih menu: ");
    scanf("%d", &pilihan);

    printf("Masukkan suhu: ");
    scanf("%f", &nilai);

    if (pilihan == 1) {
        hasil = (nilai * 9 / 5) + 32;
        printf("Hasil: %.2f F\n", hasil);
    } else if (pilihan == 2) {
        hasil = (nilai - 32) * 5 / 9;
        printf("Hasil: %.2f C\n", hasil);
    } else {
        printf("Pilihan tidak valid!\n");
    }
}

void konversiJarak() {
    int pilihan;
    float nilai, hasil;

    printf("\n-- Konversi Jarak --\n");
    printf("1. Meter ke Kilometer\n");
    printf("2. Kilometer ke Meter\n");
    printf("3. Meter ke Centimeter\n");
    printf("Pilih menu: ");
    scanf("%d", &pilihan);

    printf("Masukkan nilai: ");
    scanf("%f", &nilai);

    if (pilihan == 1) {
        hasil = nilai / 1000;
        printf("Hasil: %.2f km\n", hasil);
    } else if (pilihan == 2) {
        hasil = nilai * 1000;
        printf("Hasil: %.2f m\n", hasil);
    } else if (pilihan == 3) {
        hasil = nilai * 100;
        printf("Hasil: %.2f cm\n", hasil);
    } else {
        printf("Pilihan tidak valid!\n");
    }
}

void konversiBerat() {
    int pilihan;
    float nilai, hasil;

    printf("\n-- Konversi Berat --\n");
    printf("1. Kilogram ke Gram\n");
    printf("2. Gram ke Kilogram\n");
    printf("Pilih menu: ");
    scanf("%d", &pilihan);

    printf("Masukkan nilai: ");
    scanf("%f", &nilai);

    if (pilihan == 1) {
        hasil = nilai * 1000;
        printf("Hasil: %.2f gram\n", hasil);
    } else if (pilihan == 2) {
        hasil = nilai / 1000;
        printf("Hasil: %.2f kg\n", hasil);
    } else {
        printf("Pilihan tidak valid!\n");
    }
}

void konversiWaktu() {
    int pilihan;
    float nilai, hasil;

    printf("\n-- Konversi Waktu --\n");
    printf("1. Jam ke Menit\n");
    printf("2. Jam ke Detik\n");
    printf("3. Menit ke Jam\n");
    printf("Pilih menu: ");
    scanf("%d", &pilihan);

    printf("Masukkan nilai: ");
    scanf("%f", &nilai);

    if (pilihan == 1) {
        hasil = nilai * 60;
        printf("Hasil: %.2f menit\n", hasil);
    } else if (pilihan == 2) {
        hasil = nilai * 3600;
        printf("Hasil: %.2f detik\n", hasil);
    } else if (pilihan == 3) {
        hasil = nilai / 60;
        printf("Hasil: %.2f jam\n", hasil);
    } else {
        printf("Pilihan tidak valid!\n");
    }
}

int main(){
    int pilihan;

    do {
        printf("\n === KALKULATOR KONVERSI SATUAN ===\n");
        printf("1. konversi suhu\n");
        printf(BLU "\n === KALKULATOR KONVERSI SATUAN ===\n" RESET);
        printf(GRN "1. konversi suhu\n");
        printf("2. konversi jarak\n");
        printf("3. konversi berat\n");
        printf("4. konversi waktu\n");
        printf("5. keluar\n");
        printf("==>> " RESET);

        scanf("%d", &pilihan);

         switch (pilihan) {
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
            printf("\nKeluar\n");
            break;
        default:
            printf("\nPilihan tidak valid!\n");
            break;
    }

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

