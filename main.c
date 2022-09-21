/* Menerima masukan sebuah variabel
dengan format int dan char kemudian
menampilkannya kembali  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int umur;
    char huruf;

    printf("Masukkan umur anda: ");
    scanf("%d", &umur);

    fflush(stdin);

    printf("Masukkan huruf anda: ");
    scanf("%c", &huruf);

    printf("\nUmur anda adalah %d tahun\n", umur);
    printf("Huruf anda adalah %c", huruf);


    return 0;
}
