#include <stdio.h>

int main()
{
    int pin;
    int balance = 1000000;
    int menu, withdraw, deposit, transfer, bank_tujuan, no_rekening;
    int biaya_admin = 6500;
    int total_debit;

    printf("=== MESIN ATM BANK ABC ===\n");
    printf("Masukkan PIN: ");
    scanf("%d", &pin);

    // FIRST CHECK: Autentikasi PIN
    if (pin == 1234)
    {
        printf("Login berhasil!\n\n");
        printf("--- MENU UTAMA ---\n");
        printf("1. Cek Saldo\n");
        printf("2. Tarik Tunai\n");
        printf("3. Setor Tunai\n");
        printf("4. Transfer Antar-Bank\n");
        printf("Pilih transaksi (1-4): ");
        scanf("%d", &menu);

        // SWITCH-CASE: Menangani pilihan menu transaksi
        switch (menu)
        {
        case 1: // Cek Saldo
            printf("\nSaldo Anda saat ini: Rp %d\n", balance);
            break;

        case 2: // Tarik Tunai dengan NESTED IF
            printf("\nMasukkan jumlah penarikan: Rp ");
            scanf("%d", &withdraw);

            // Layered Check 1: Saldo cukup?
            if (withdraw <= balance)
            {
                // Layered Check 2: Kelipatan 50.000?
                if (withdraw % 50000 == 0)
                {
                    // Layered Check 3: Aturan saldo mengendap minimal Rp 50.000
                    if (balance - withdraw >= 50000)
                    {
                        balance = balance - withdraw;
                        printf("Tarik tunai berhasil!\n");
                        printf("Sisa saldo Anda: Rp %d\n", balance);
                    }
                    else
                    {
                        printf("Error: Saldo mengendap minimal Rp 50.000 harus tersisa!\n");
                    }
                }
                else
                {
                    printf("Error: Jumlah penarikan harus kelipatan Rp 50.000!\n");
                }
            }
            else
            {
                printf("Error: Saldo Anda tidak mencukupi!\n");
            }
            break;

        case 3: // Setor Tunai dengan NESTED IF
            printf("\nMasukkan jumlah uang yang disetor: Rp ");
            scanf("%d", &deposit);

            // Layered Check 1: Jumlah valid (> 0)?
            if (deposit > 0)
            {
                // Layered Check 2: Hanya menerima pecahan 50k atau 100k
                if (deposit % 50000 == 0)
                {
                    balance = balance + deposit;
                    printf("Setor tunai berhasil!\n");
                    printf("Saldo baru Anda: Rp %d\n", balance);
                }
                else
                {
                    printf("Error: Setor tunai hanya menerima pecahan Rp 50.000 atau Rp 100.000!\n");
                }
            }
            else
            {
                printf("Error: Jumlah setoran tidak valid!\n");
            }
            break;

        case 4: // Transfer Antar-Bank
            printf("\nPilih Bank Tujuan:\n");
            printf("1. Bank Mandiri\n");
            printf("2. BCA\n");
            printf("3. BRI\n");
            printf("Pilihan bank (1-3): ");
            scanf("%d", &bank_tujuan);

            if (bank_tujuan >= 1 && bank_tujuan <= 3)
            {
                printf("Masukkan nomor rekening tujuan: ");
                scanf("%d", &no_rekening);

                printf("Masukkan nominal transfer: Rp ");
                scanf("%d", &transfer);

                printf("Biaya administrasi antar-bank: Rp %d\n", biaya_admin);
                total_debit = transfer + biaya_admin;

                // Layered Check: Saldo mencukupi nominal + biaya admin?
                if (transfer > 0)
                {
                    if (total_debit <= balance)
                    {
                        balance = balance - total_debit;
                        printf("\n--- STRUK TRANSFER BERHASIL ---\n");
                        printf("Tujuan Rekening : %d\n", no_rekening);
                        printf("Nominal Transfer: Rp %d\n", transfer);
                        printf("Biaya Admin     : Rp %d\n", biaya_admin);
                        printf("Total Terdebit  : Rp %d\n", total_debit);
                        printf("Sisa Saldo Anda : Rp %d\n", balance);
                    }
                    else
                    {
                        printf("Error: Saldo tidak mencukupi untuk transfer dan biaya admin!\n");
                    }
                }
                else
                {
                    printf("Error: Nominal transfer harus lebih dari 0!\n");
                }
            }
            else
            {
                printf("Error: Pilihan bank tujuan tidak valid!\n");
            }
            break;

        default:
            printf("\nError: Pilihan menu tidak valid!\n");
            break;
        }
    }
    else
    {
        printf("Error: PIN yang Anda masukkan salah!\n");
    }

    return 0;
}