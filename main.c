
void konversiJarak() {
    float kilometer, meter, centimeter;
    int pilihan;
    int lagi;

    while (1) {
        printf("\n====================================\n");
        printf("   KALKULATOR KONVERSI JARAK\n");
        printf("====================================\n\n");

        printf("Masukkan jarak (dalam kilometer): ");
        if (scanf("%f", &kilometer) != 1) {
            printf("Input tidak valid!\n");
            while (getchar() != '\n');
            continue;
        }

        if (kilometer < 0) {
            printf("Input tidak valid! Jarak tidak boleh negatif.\n");
            continue;
        }

        printf("\nUbah satuan ke:\n");
        printf("1. Meter\n");
        printf("2. Centimeter\n");
        printf("3. Keduanya (Meter & Centimeter)\n");
        printf("Pilih (1-3): ");

        if (scanf("%d", &pilihan) != 1) {
            printf("Input tidak valid!\n");
            while (getchar() != '\n');
            continue;
        }

        if (pilihan < 1 || pilihan > 3) {
            printf("Pilihan tidak valid! Masukkan 1, 2, atau 3.\n");
            continue;
        }

        meter = kilometer * 1000;
        centimeter = kilometer * 100000;

        printf("\n====================================\n");
        printf("           HASIL KONVERSI\n");
        printf("====================================\n");
        printf("Jarak: %.2f kilometer\n\n", kilometer);

        if (pilihan == 1) {
            printf("Konversi ke Meter:\n");
            printf("  • %.2f m\n", meter);
        } else if (pilihan == 2) {
            printf("Konversi ke Centimeter:\n");
            printf("  • %.2f cm\n", centimeter);
        } else if (pilihan == 3) {
            printf("Konversi ke:\n");
            printf("  • Meter      : %.2f m\n", meter);
            printf("  • Centimeter : %.2f cm\n", centimeter);
        }

        printf("====================================\n");

        printf("\nIngin melakukan konversi lagi? (1=Ya, 0=Tidak): ");
        if (scanf("%d", &lagi) != 1) {
            while (getchar() != '\n');
            break;
        }

        if (lagi != 1) {
            printf("\nTerima kasih telah menggunakan kalkulator!\n");
            break;
        }
    }

    return 0;
}
