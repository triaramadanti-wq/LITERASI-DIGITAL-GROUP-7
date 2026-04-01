#include <stdio.h>
#include <stdlib.h>

void konversiSuhu();
void konversiJarak();
void konversiBerat();
void konversiWaktu(){
      int jam,menit,detik,pilihan,hasil;

    printf("Masukkan jumlah jam: ");
    scanf("%d", &jam);

    printf("\n Pilih Konversi: \n");
    printf ("1. Ke Menit");
    printf ("2. Ke Detik");
    printf ("Masukkan pilihan (1/2) :");
    scanf ("%d", &pilihan);
    
    
    if ( pilihan == 1 ) {
        hasil = jam * 60;
        printf ("%d jam = %d menit\n", jam,hasil);
    }
    else if (pilihan == 2) {
        hasil = jam * 3600;
        printf("%d jam = %d detik\n", jam,hasil);
    }
    else {
        printf ("Pilihan tidak valid");
    } 
    
    return 0;
}

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
