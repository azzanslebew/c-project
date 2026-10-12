#include <stdio.h>

int main()
{
    int jumlah_pensil, harga_per_pensil, total_biaya;

    printf("Masukkan jumlah pensil yang dibeli: ");
    scanf("%d", &jumlah_pensil);

    printf("\nJumlah pensil: %d buah\n", jumlah_pensil);

    if (jumlah_pensil < 50)
    {
        harga_per_pensil = 2500;
    }
    else
    {
        harga_per_pensil = 2000;
    }

    printf("Harga per pensil: Rp. %d\n", harga_per_pensil);
    printf("-------------------------------\n");

    total_biaya = jumlah_pensil * harga_per_pensil;

    printf("Total biaya: Rp. %d\n", total_biaya);
    printf("Terimakasih sudah berkunjung!");

    return 0;
}