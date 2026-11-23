#include <iostream>
using namespace std;

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

void cetakStrukTiket(int jumlah, int total, int bayar, int kembalian)
{
    cout << "---------------------------";
    cout << "\nJumlah Tiket        : " << jumlah;
    cout << "\nTotal Biaya         : Rp " << total;
    cout << "\nUang Dibayarkan     : Rp " << bayar;
    cout << "\nUang Kembalian      : Rp " << kembalian;
    cout << "\nSelamat Menonton di CinePass!";
    cout << "\n---------------------------";
}

int main()
{
    int tipeHari, hargaSatuan, jumlahTiket, totalBiaya, uangBayar, kurang, kembalian;

    cout << "--- TIKET BIOSKOP CINEPASS ---\n";

    cout << "Pilih hari penayangan (1. Weekday / 2. Weekend): ";
    cin >> tipeHari;

    hargaSatuan = hitungHargaTiket(tipeHari);

    cout << "Masukkan jumlah tiket: ";
    cin >> jumlahTiket;

    cout << "Harga tiket satuan: Rp " << hargaSatuan;

    totalBiaya = hitungTotal(jumlahTiket, hargaSatuan);
    if (jumlahTiket >= 4)
    {
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

    cetakStrukTiket(jumlahTiket, totalBiaya, uangBayar, kembalian);

    return 0;
}