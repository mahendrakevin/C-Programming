#include "header.h"

int main ()
{
    int cari , hasil , i , n;
    int angka[100];

    printf("Berapa data yg ingin di input [Max 100]: ");
    scanf("%d" , &n);

    printf("\n===Input angka===\n");
    for ( i = 0; i < n; i ++ )
    {
        printf("Data ke - %d : ", i+1);
        scanf("%d", &angka[i]);
    }
    SelectionSort(angka, n);
    printf("Berapa angka yg ingin dicari: ");
    scanf("%d", &cari);
    hasil = BinarySearch (n ,angka ,cari );

    if  ( hasil == - 1 )
    {
        printf("\nData tidak ditemukan !! ");
    }
    else
    {
        printf("\nAngka %d ditemukan di indeks %d", cari ,hasil+1);
    }

    return 0;
}
