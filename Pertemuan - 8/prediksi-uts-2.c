#include <stdio.h>

int main()
{
    int studio, jumlah_tiket, hari, umur;
    int harga_dasar, surcharge_weekend = 0, harga_tiket;
    int total_kotor, persen_diskon = 0, potongan, total_bayar;

    printf("=== PEMBELIAN TIKET BIOSKOP ===\n");
    printf("1. Regular : Rp  40.000\n");
    printf("2. Deluxe  : Rp  60.000\n");
    printf("3. VIP     : Rp 100.000\n");
    printf("-----------------------------------------\n");

    printf("Pilih studio (1-3)            : ");
    scanf("%d", &studio);

    // SWITCH-CASE: Menentukan harga dasar per studio
    switch (studio)
    {
    case 1:
        harga_dasar = 40000;
        break;
    case 2:
        harga_dasar = 60000;
        break;
    case 3:
        harga_dasar = 100000;
        break;
    default:
        printf("Error: Pilihan studio tidak valid!\n");
        return 0;
    }

    printf("Jumlah tiket                  : ");
    scanf("%d", &jumlah_tiket);
    if (jumlah_tiket <= 0)
    {
        printf("Error: Jumlah tiket harus minimal 1!\n");
        return 0;
    }

    printf("Hari (1=Senin s.d. 7=Minggu)  : ");
    scanf("%d", &hari);

    // SWITCH-CASE: Pengecekan kenaikan harga weekend (Sabtu/Minggu naik 20%)
    switch (hari)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        surcharge_weekend = 0;
        break;
    case 6: // Sabtu
    case 7: // Minggu
        surcharge_weekend = harga_dasar * 20 / 100;
        break;
    default:
        printf("Error: Input hari tidak valid (harus 1-7)!\n");
        return 0;
    }

    printf("Umur pembeli                  : ");
    scanf("%d", &umur);
    if (umur < 0)
    {
        printf("Error: Umur tidak valid!\n");
        return 0;
    }

    // Perhitungan harga tiket per lembar & total kotor
    harga_tiket = harga_dasar + surcharge_weekend;
    total_kotor = harga_tiket * jumlah_tiket;

    // NESTED IF: Penentuan diskon kuantitas tiket
    if (jumlah_tiket >= 3)
    {
        if (jumlah_tiket >= 5)
        {
            persen_diskon += 20; // Diskon tiket >= 5
        }
        else
        {
            persen_diskon += 10; // Diskon tiket 3 sampai 4
        }
    }

    // Tambahan diskon umur
    if (umur < 12)
    {
        persen_diskon += 10;
    }
    else if (umur >= 60)
    {
        persen_diskon += 15;
    }

    // Hitung nominal potongan dan total bayar bersih
    potongan = total_kotor * persen_diskon / 100;
    total_bayar = total_kotor - potongan;

    // Output Rincian Transaksi
    printf("\n--- RINCIAN BIAYA TIKET ---\n");
    switch (studio)
    {
    case 1:
        printf("Studio                        : Regular\n");
        break;
    case 2:
        printf("Studio                        : Deluxe\n");
        break;
    case 3:
        printf("Studio                        : VIP\n");
        break;
    }

    printf("Harga Dasar per Tiket         : Rp %d\n", harga_dasar);
    printf("Penyesuaian Weekend (+20%%)    : Rp %d\n", surcharge_weekend);
    printf("Harga Akhir per Tiket         : Rp %d\n", harga_tiket);
    printf("Total Kotor (%d tiket)         : Rp %d\n", jumlah_tiket, total_kotor);
    printf("Total Diskon (%d%%)            : Rp %d\n", persen_diskon, potongan);
    printf("-----------------------------------------\n");
    printf("Total Bayar                   : Rp %d\n", total_bayar);

    // NESTED IF: Pengecekan bonus popcorn berjenjang
    if (total_bayar >= 300000)
    {
        if (total_bayar >= 500000)
        {
            printf("Catatan Bonus                 : Selamat! Anda mendapatkan FREE Popcorn Jumbo + Minuman!\n");
        }
        else
        {
            printf("Catatan Bonus                 : Selamat! Anda mendapatkan FREE Popcorn Regular!\n");
        }
    }
    else
    {
        printf("Catatan Bonus                 : Tidak mendapat bonus popcorn\n");
    }

    return 0;
}