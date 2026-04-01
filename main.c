#include <stdio.h>
#include <stdlib.h>

#define RESET   "\033[0m"
#define BLUE    "\033[1;34m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define CYAN    "\033[1;36m"
#define RED     "\033[1;31m"
    
void konversiSuhu(){}
void konversiJarak(){}
void konversiBerat()
{

    float kg;

        printf(BLUE"============================================\n"RESET);
        printf(GREEN "      ====     KONVERSI BERAT    ===      \n"RESET);
        printf(BLUE"============================================\n"RESET);
        printf(GREEN" MASUKAN BERAT (KG): "RESET);
        scanf("%f", &kg);
        
            if (kg < 0) 
            {
            printf(RED"Input tidak valid!\n"RESET);
            return;
            }
    int pilihan;
        while (1)
        {
        printf(BLUE"\n=======================\n"RESET);
        printf(GREEN" PILIH JENIS KONVERSI \n"RESET);
        printf(BLUE"=======================\n"BLUE);
        printf(YELLOW"1. Kilogram ke Gram\n");
        printf("2. Kilogram ke Pons\n");
        printf("3. Keduanya\n");
        printf("Pilih (1-3): "RESET);
        scanf("%d", &pilihan);

            switch(pilihan) 
            {
                case 1:
                    printf(BLUE"=================\n"RESET);
                    printf(GREEN" HASIL KONVERSI \n"RESET);
                    printf(BLUE"=================\n"BLUE);
                    printf(GREEN"Hasil: %.2f kg = %.2f gram\n"RESET, kg, kg * 1000);
                    break;
                case 2:
                    printf(BLUE"=================\n"RESET);
                    printf(GREEN" HASIL KONVERSI \n"RESET);
                    printf(BLUE"=================\n"BLUE);
                    printf(GREEN"Hasil: %.2f kg = %.2f pons\n"RESET, kg, kg * 10);
                    break;
                case 3:
                    printf(BLUE"=================\n"RESET);
                    printf(GREEN" HASIL KONVERSI \n"RESET);
                    printf(BLUE"=================\n"BLUE);
                    printf(GREEN"Gram: %.2f g\n", kg * 1000);
                    printf("Pons: %.2f pons\n"RESET, kg * 10);
                    break;
                default:
                    printf(BLUE"=================\n"RESET);
                    printf(GREEN" HASIL KONVERSI \n"RESET);
                    printf(BLUE"=================\n"BLUE);
                    printf(RED"Pilihan tidak valid!\n"RESET);
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