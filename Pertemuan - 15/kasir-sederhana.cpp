#include <iostream>
using namespace std;

int hitungDiskon(int total)
{
    if (total >= 10000)
    {
        return total * 10 / 100;
    }
    return 0;
}

void tampilkanMenu()
{
    cout << "\n===== PROGRAM KASIR =====\n";
    cout << "1. Buku      - Rp 5000\n";
    cout << "2. Pensil    - Rp 3000\n";
    cout << "3. Penghapus - Rp 2000\n";
    cout << "4. Pulpen    - Rp 4000\n";
}

void tampilkanStruk(int total, int diskon, int totalBayar, int uangBayar, int kembalian)
{
    cout << "\n========== STRUK BELANJA ==========";
    cout << "\nTotal Belanja : Rp " << total;
    cout << "\nDiskon        : Rp " << diskon;
    cout << "\nTotal Bayar   : Rp " << totalBayar;
    cout << "\nUang Bayar    : Rp " << uangBayar;
    cout << "\nKembalian     : Rp " << kembalian;
    cout << "\n===================================\n";
}

int main()
{
    int jumlah, pilihanBarang, harga, totalBelanja, diskon, uangBayar, kurang, totalBayar, kembalian;
    char ulang;

    do
    {
        totalBelanja = 0;

        tampilkanMenu();

        cout << "\nMasukkan jumlah barang: ";
        cin >> jumlah;

        for (int i = 1; i <= jumlah; i++)
        {
            cout << "\nBarang ke-" << i;
            cout << "\nPilih barang (1-4): ";
            cin >> pilihanBarang;

            switch (pilihanBarang)
            {
            case 1:
                harga = 5000;
                cout << "Barang: Buku | Harga: Rp 5000\n";
                break;

            case 2:
                harga = 3000;
                cout << "Barang: Pensil | Harga: Rp 3000\n";
                break;

            case 3:
                harga = 2000;
                cout << "Barang: Penghapus | Harga: Rp 2000\n";
                break;

            case 4:
                harga = 4000;
                cout << "Barang: Pulpen | Harga: Rp 4000\n";
                break;

            default:
                harga = 0;
                cout << "Pilihan tidak tersedia!\n";
                break;
            }

            totalBelanja += harga;
        }

        diskon = hitungDiskon(totalBelanja);
        totalBayar = totalBelanja - diskon;

        if (diskon > 0)
        {
            cout << "\nSelamat! Anda mendapatkan diskon 10% sebesar Rp " << diskon << "\n";
        }
        else
        {
            cout << "\nMaaf, Anda belum mendapatkan diskon.\n";
        }

        cout << "\nTotal yang harus dibayar: Rp " << totalBayar;

        do
        {
            cout << "\nMasukkan uang yang dibayarkan: Rp ";
            cin >> uangBayar;

            if (uangBayar < totalBayar)
            {
                kurang = totalBayar - uangBayar;
                cout << "Uang tidak cukup! Kurang Rp " << kurang << "\n";
            }

        } while (uangBayar < totalBayar);

        kembalian = uangBayar - totalBayar;

        tampilkanStruk(totalBelanja, diskon, totalBayar, uangBayar, kembalian);

        cout << "\nTransaksi lagi? (Y/N): ";
        cin >> ulang;

    } while (ulang == 'Y' || ulang == 'y');

    cout << "\nTerima kasih telah berbelanja!\n";

    return 0;
}
