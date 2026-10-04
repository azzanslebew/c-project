#include <stdio.h>

int main()
{
    int paket, berat, bayar;
    int tarif_per_kg, subtotal, diskon, total_biaya, kembalian;

    printf("=== KASIR WASHWASH ===\n");
    printf("1. Cuci Kering Lipat   : Rp  6.000 / kg\n");
    printf("2. Cuci Kering Setrika : Rp  9.000 / kg\n");
    printf("3. Bedcover / Selimut  : Rp 15.000 / kg\n");
    printf("---------------------------------------\n");

    printf("Pilih paket (1-3): ");
    scanf("%d", &paket);

    // Implementasi SWITCH-CASE untuk menu diskrit
    switch (paket)
    {
    case 1:
        tarif_per_kg = 6000;
        break;
    case 2:
        tarif_per_kg = 9000;
        break;
    case 3:
        tarif_per_kg = 15000;
        break;
    default:
        printf("Error: Pilihan paket tidak valid!\n");
        return 0;
    }

    printf("Masukkan berat cucian (kg): ");
    scanf("%d", &berat);

    // Implementasi NESTED IF untuk validasi berjenjang
    if (berat > 0)
    {
        // Hitung biaya dasar
        subtotal = berat * tarif_per_kg;

        // Cek diskon berdasarkan volume
        if (berat >= 10)
        {
            diskon = subtotal * 10 / 100;
        }
        else
        {
            diskon = 0;
        }

        total_biaya = subtotal - diskon;

        // Tampilkan invoice ringkas
        printf("\n--- RINCIAN TAGIHAN ---\n");
        switch (paket)
        {
        case 1:
            printf("Paket Layanan    : Cuci Kering Lipat\n");
            break;
        case 2:
            printf("Paket Layanan    : Cuci Kering Setrika\n");
            break;
        case 3:
            printf("Paket Layanan    : Bedcover / Selimut\n");
            break;
        }
        printf("Tarif per kg     : Rp %d\n", tarif_per_kg);
        printf("Subtotal         : Rp %d\n", subtotal);
        printf("Diskon (10%%)     : Rp %d\n", diskon);
        printf("Total Bayar      : Rp %d\n", total_biaya);
        printf("---------------------------------------\n");

        printf("Masukkan uang dibayarkan: Rp ");
        scanf("%d", &bayar);

        // Nested IF level 2: Cek kecukupan uang bayar
        if (bayar >= total_biaya)
        {
            kembalian = bayar - total_biaya;
            printf("\nUang kembalian   : Rp %d\n", kembalian);
            printf("Terima kasih telah menggunakan WashWash!\n");
        }
        else
        {
            int kurang = total_biaya - bayar;
            printf("\nError: Uang tidak cukup! Anda masih kurang Rp %d\n", kurang);
        }
    }
    else
    {
        printf("Error: Berat cucian harus lebih dari 0 kg!\n");
    }

    return 0;
}