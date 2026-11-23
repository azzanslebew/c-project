#include <iostream>
using namespace std;

int main()
{
    int tipeHari, hargaSatuan, jumlahTiket, totalBiaya, uangBayar, kurang, kembalian;

    cout << "--- TIKET BIOSKOP CINEPASS ---\n";

    cout << "Pilih hari penayangan (1. Weekday / 2. Weekend): ";
    cin >> tipeHari;

    if (tipeHari == 1)
    {
        hargaSatuan = 35000;
    }
    else
    {
        hargaSatuan = 50000;
    }

    cout << "Masukkan jumlah tiket: ";
    cin >> jumlahTiket;

    cout << "Harga tiket satuan: Rp " << hargaSatuan;

    totalBiaya = hargaSatuan * jumlahTiket;
    if (jumlahTiket >= 4)
    {
        totalBiaya -= 15000;
        cout << "\nTotal biaya (Promo Beli 4+ Diskon Rp15000): Rp " << totalBiaya;
    }
    else
    {
        cout << "\nTotal biaya: Rp " << totalBiaya;
    }

    do
    {
        cout << "\n\nMasukkan uang yang dibayarkan: Rp ";
        cin >> uangBayar;

        if (uangBayar < totalBiaya)
        {
            kurang = totalBiaya - uangBayar;
            cout << "Error: Uang tidak cukup! Kurang Rp " << kurang << ". Silahkan masukkan ulang.";
        }
    } while (uangBayar < totalBiaya);

    kembalian = uangBayar - totalBiaya;

    cout << "---------------------------";
    cout << "\nJumlah Tiket        : " << jumlahTiket;
    cout << "\nTotal Biaya         : Rp " << totalBiaya;
    cout << "\nUang Dibayarkan     : Rp " << uangBayar;
    cout << "\nUang Kembalian      : Rp " << kembalian;
    cout << "\nSelamat Menonton di CinePass!";
    cout << "\n---------------------------";

    return 0;
}