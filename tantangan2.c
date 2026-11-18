/*
 * Program   : Sistem Login Sederhana (Maksimal 3 Percobaan)
 * Nama      : Billy Arliansyah
 * NIM       : 12046126024
 * Deskripsi : While loop dengan counter percobaan dan break untuk autentikasi login
 */
#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    int password;
    int percobaan = 0;
    int login_sukses = 0; // Flag penanda status login (0 = gagal, 1 = berhasil)

    printf("=== SISTEM LOGIN ===\n");

    while (percobaan < 3) {
        printf("\nPercobaan ke-%d dari 3\n", percobaan + 1);
        printf("Masukkan Username: ");
        scanf("%49s", username);
        printf("Masukkan Password: ");
        scanf("%d", &password);

        // Cek apakah username sama dengan "admin" dan password sama dengan 1234
        if (strcmp(username, "admin") == 0 && password == 1234) {
            printf("\nLogin Berhasil\n");
            login_sukses = 1;
            break; // Langsung keluar dari while loop sesuai petunjuk soal
        } else {
            percobaan++;
            if (percobaan < 3) {
                printf("Username atau password salah! Sisa percobaan: %d\n", 3 - percobaan);
            }
        }
    }

    // Jika setelah keluar dari loop statusnya tetap 0 (gagal 3 kali)
    if (login_sukses == 0) {
        printf("\nAkun terkunci! Hubungi admin.\n");
    }

    return 0;
}