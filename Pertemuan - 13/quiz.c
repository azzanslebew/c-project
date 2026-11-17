#include <stdio.h>

// Fungsi untuk menghitung harga tiket berdasarkan tipe hari
int hitungHargaTiket(int tipeHari)
{
    if (tipeHari == 1)
    {
        return 35000;
    }
    else
    {
        return 50000;
    }
}

// Fungsi untuk menghitung total biaya tiket dengan promo
int hitungTotal(int jumlahTiket, int hargaSatuan)
{
    int totalBiaya = hargaSatuan * jumlahTiket;
    if (jumlahTiket >= 4)
    {
        return totalBiaya - 15000;
    }
    else
    {
        return totalBiaya;
    }
}

// Prosedur untuk mencetak struk tiket
void cetakStrukTiket(int jumlah, int total, int bayar, int kembalian)
{
    printf("---------------------------------\n");
    printf("Jumlah Tiket        : %d\n", jumlah);
    printf("Total Biaya         : Rp %d\n", total);
    printf("Uang Dibayarkan     : Rp %d\n", bayar);
    printf("Uang Kembalian      : Rp %d\n", kembalian);
    printf("Selamat Menonton di CinePass!\n");
    printf("---------------------------------");
}

int main()
{
    // Deklarasi variabel
    int tipeHari, hargaSatuan, jumlahTiket, totalBiaya, uangBayar, kurang, kembalian;

    printf("--- TIKET BIOSKOP CINEPASS ---\n");

    printf("Pilih hari penayangan (1. Weekday / 2. Weekend): ");
    scanf("%d", &tipeHari);

    // Memanggil fungsi untuk menghitung harga tiket berdasarkan tipe hari
    hargaSatuan = hitungHargaTiket(tipeHari);

    printf("Masukkan jumlah tiket: ");
    scanf("%d", &jumlahTiket);

    printf("Harga tiket satuan: Rp %d\n", hargaSatuan);

    // Memanggil fungsi untuk menghitung total biaya tiket dengan promo
    totalBiaya = hitungTotal(jumlahTiket, hargaSatuan);

    printf("Total biaya (Promo Beli 4+ Diskon Rp15000): Rp %d\n", totalBiaya);

    printf("\nMasukkan uang dibayarkan: Rp ");
    scanf("%d", &uangBayar);

    // Looping untuk memastikan uang yang dibayarkan cukup
    while (uangBayar < totalBiaya)
    {
        kurang = totalBiaya - uangBayar;
        printf("Error: Uang tidak cukup! Kurang Rp %d. Silahkan masukkan ulang.", kurang);

        printf("\nMasukkan uang dibayarkan: Rp ");
        scanf("%d", &uangBayar);
    }

    kembalian = uangBayar - totalBiaya;

    // Memangggil prosedur untuk mencetak struk tiket
    cetakStrukTiket(jumlahTiket, totalBiaya, uangBayar, kembalian);

    return 0;
}