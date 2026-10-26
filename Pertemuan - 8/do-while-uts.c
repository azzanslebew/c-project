#include <stdio.h>

int main()
{
    float berat_barang, persentase;
    int jarak_pengiriman, status_member, uang_pembayaran, tarif_dasar, diskon, total_biaya;
    char choice;

    do
    {
        printf("\n=============================================\n");
        printf("      APLIKASI TARIF PENGIRIMAN ANTARCEPAT");
        printf("\n=============================================\n");

        printf("Masukkan berat barang (kg)      : ");
        scanf("%f", &berat_barang);

        printf("Masukkan jarak pengiriman (km)  : ");
        scanf("%d", &jarak_pengiriman);

        if (jarak_pengiriman < 30)
        {
            tarif_dasar = 500 * jarak_pengiriman;
        }
        else
        {
            tarif_dasar = 400 * jarak_pengiriman;
        }

        printf("Status Member (1=Ya, 0=Tidak)   : ");
        scanf("%d", &status_member);

        if (status_member == 1)
        {
            if (berat_barang > 10 && jarak_pengiriman > 100)
            {
                persentase = 0.15;
            }
            else
            {
                persentase = 0.1;
            }
        }
        else
        {
            if (berat_barang > 10 && jarak_pengiriman > 100)
            {
                persentase = 0.05;
            }
            else
            {
                persentase = 0;
            }
        }

        diskon = persentase * tarif_dasar;
        total_biaya = tarif_dasar - diskon;

        printf("Masukkan uang pembayaran (Rp)   : ");
        scanf("%d", &uang_pembayaran);

        printf("\n=============================================\n");
        printf("               RINCIAN TRANSAKSI");
        printf("\n=============================================\n");

        printf("Berat Barang                : %.2f kg\n", berat_barang);
        printf("Jarak Pengiriman            : %d km\n", jarak_pengiriman);
        printf("-----------------------------------------------\n");
        printf("Biaya Sebelum Diskon        : Rp %d\n", tarif_dasar);
        printf("Diskon (%.0f%%)                : Rp %d\n", persentase * 100, diskon);
        printf("-----------------------------------------------\n");
        printf("Total Biaya Setelah Diskon  : Rp %d\n", total_biaya);
        printf("Uang Pembayaran             : Rp %d\n", uang_pembayaran);

        if (uang_pembayaran < total_biaya)
        {
            printf("Maaf tidak dapat memproses pembayaran, uang anda kurang : Rp %d\n", total_biaya - uang_pembayaran);
        }
        else
        {
            printf("Kembalian                   : Rp %d\n", uang_pembayaran - total_biaya);
        }

        printf("\nApakah Anda ingin mengulangi transaksi? (Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("\n=============================================\n");
    printf("Terima kasih telah menggunakan AntarCepat!");
    printf("\n=============================================\n");

    return 0;
}
