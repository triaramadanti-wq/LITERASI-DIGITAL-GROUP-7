#include <stdio.h>
#include <stdlib.h>

void konversiSuhu(){}
void konversiJarak(){}
void konversiBerat()
{

    float kg;

        printf("\n=== Konversi Berat ===\n");
        printf("Masukkan berat (kg): ");
        scanf("%f", &kg);
        
            if (kg < 0) 
            {
            printf("Input tidak valid!\n");
            return;
            }
    int pilihan;
        while (1)
        {
        
        printf("\nPilih jenis konversi:\n");
        printf("1. Kilogram ke Gram\n");
        printf("2. Kilogram ke Pons\n");
        printf("3. Keduanya\n");
        printf("Pilih (1-3): ");
        scanf("%d", &pilihan);

            switch(pilihan) 
            {
                case 1:
                    printf("Hasil: %.2f kg = %.2f gram\n", kg, kg * 1000);
                    break;
                case 2:
                    printf("Hasil: %.2f kg = %.2f pons\n", kg, kg * 10);
                    break;
                case 3:
                    printf("Gram: %.2f g\n", kg * 1000);
                    printf("Pons: %.2f pons\n", kg * 10);
                    break;
                default:
                    printf("Pilihan tidak valid!\n");
                    continue;
         
               }
               break;
        }
}
void konversiWaktu(){}

int main(){
    int pilihan;

    do {
        printf("\n === KALKULATOR KONVERSI SATUAN ===\n");
        printf("1. konversi suhu\n");
        printf("2. konversi jarak\n");
        printf("3. konversi berat\n");
        printf("4. konversi waktu\n");
        printf("masukan pilihan : ");
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
    } while(pilihan != 5);
    return 0;
}