// Nilai Sendiri = 100

#include <stdio.h>

int main()
{
    // Deklarasi Variabel
    int jumlah_lembar, harga_lembar, total_biaya, uang_masuk, uang_kembalian;

    printf("--- KASIR KOPIKOPI ---\n");

    // Input Jumlah Lembar yang Diinginkan
    printf("Masukkan jumlah lembar: ");
    scanf("%d", &jumlah_lembar);

    // Hitung Harga per Lembar
    if (jumlah_lembar < 100)
    {
        harga_lembar = 150;
    }
    else
    {
        harga_lembar = 100;
    }

    printf("Harga per lembar: Rp %d\n", harga_lembar);

    // Hitung Total Biaya
    total_biaya = jumlah_lembar * harga_lembar;
    printf("Total biaya: Rp %d\n\n", total_biaya);

    // Input Uang yang Mau Dibayarkan
    printf("Masukkan uang dibayarkan: Rp ");
    scanf("%d", &uang_masuk);

    printf("----------------------\n");

    // Output Struk Akhir
    printf("Jumlah lembar: %d\n", jumlah_lembar);
    printf("Total biaya: Rp %d\n", total_biaya);
    printf("Uang dibayarkan: Rp %d\n", uang_masuk);

    // Logika Uang Mencukupi atau Kurang
    if (uang_masuk >= total_biaya)
    {
        uang_kembalian = uang_masuk - total_biaya;
        printf("Uang kembalian: Rp %d\n", uang_kembalian);
        printf("Terima kasih telah menggunakan KopiKopi!\n");
    }
    else
    {
        printf("Error: Uang tidak cukup! Anda masih kurang Rp %d\n", total_biaya - uang_masuk);
    }

    return 0;
}