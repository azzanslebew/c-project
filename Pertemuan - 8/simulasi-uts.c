#include <stdio.h>

int main()
{
    int paket_cuci, berat_cucian, layanan, status_member;
    float tarif_per_kg, biaya_pokok, biaya_tambahan;
    float subtotal, persen_diskon, diskon, total_biaya;

    printf("=== SMART LAUNDRY EXPRESS ===\n");
    printf("1. Cuci Kering Lipat   : Rp  6000 / kg\n");
    printf("2. Cuci Kering Setrika : Rp  9000 / kg\n");
    printf("3. Bedcover / Selimut  : Rp 15000 / kg\n");
    printf("-------------------------------------\n");

    printf("Pilih paket cuci (1-3)              : ");
    scanf("%d", &paket_cuci);

    switch (paket_cuci)
    {
    case 1:
        tarif_per_kg = 6000.00;
        break;
    case 2:
        tarif_per_kg = 9000.00;
        break;
    case 3:
        tarif_per_kg = 15000.00;
        break;
    default:
        printf("Pilihan paket cuci tidak valid!\n");
        return 0;
    }

    printf("Berat cucian (kg)                   : ");
    scanf("%d", &berat_cucian);

    if (berat_cucian <= 0)
    {
        printf("Berat cucian harus lebih dari 0 kg!\n");
        return 0;
    }

    biaya_pokok = berat_cucian * tarif_per_kg;

    printf("Layanan (1=Reguler, 2=Express)      : ");
    scanf("%d", &layanan);

    if (layanan == 1)
    {
        biaya_tambahan = 0.0;
    }
    else if (layanan == 2)
    {
        biaya_tambahan = berat_cucian * 3000.00;
    }
    else
    {
        printf("Pilihan layanan tidak valid!\n");
        return 0;
    }

    subtotal = biaya_pokok + biaya_tambahan;

    printf("Status member (1=ya, 0=no)          : ");
    scanf("%d", &status_member);

    if (status_member == 1)
    {
        if (berat_cucian >= 10)
        {
            persen_diskon = 0.20;
        }
        else
        {
            persen_diskon = 0.10;
        }
    }
    else if (status_member == 0)
    {
        if (berat_cucian >= 10)
        {
            persen_diskon = 0.05;
        }
        else
        {
            persen_diskon = 0.0;
        }
    }
    else
    {
        printf("Pilihan status member tidak valid!\n");
        return 0;
    }

    diskon = persen_diskon * subtotal;
    total_biaya = subtotal - diskon;

    printf("\n--- RINCIAN BIAYA LAUNDRY ---\n");
    printf("Biaya Pokok Cuci        : Rp %10.2f\n", biaya_pokok);
    printf("Biaya Tambahan          : Rp %10.2f\n", biaya_tambahan);
    printf("Subtotal                : Rp %10.2f\n", subtotal);
    printf("Diskon (%.0f%%)             : Rp %10.2f\n", persen_diskon * 100.00, diskon);
    printf("-------------------------------------\n");
    printf("Total Bayar             : Rp %10.2f\n", total_biaya);

    return 0;
}