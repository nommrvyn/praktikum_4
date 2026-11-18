/*
 * Program  : Mencetak Pola Segitiga Bintang
 * Nama     : Billy Arliansyah
 * NIM      : 12046126024
 * Deskripsi: Nested for loop untuk pola segitiga bintang
 */
#include <stdio.h>

int main() {
    int N;

    printf("=== CETAK POLA SEGITIGA BINTANG ===\n");
    printf("Masukkan jumlah baris: ");
    scanf("%d", &N);

    // Loop luar: mengatur baris (1 sampai N)
    for (int i = 1; i <= N; i++) {
        // Loop dalam: cetak bintang sebanyak i
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // pindah ke baris baru
    }

    return 0;
}