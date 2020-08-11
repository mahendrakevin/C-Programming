#include "header.h"

void ProsesSorting(int angka[], int n)
{
	int a=0;
	while(a<n)
	{
		printf("%d ", angka[a]);
		a++;
	}
	puts("");
}

void SelectionSort(int angka[], int n)
{
    int i, j, temp;
    printf("\n===ProsesSorting===\n");
    for (i = 0; i < n; i++)
    {
       for (j = i+1; j < n; j++)
       {
           if(angka[i]>angka[j])
           {
            temp = angka[i];
            angka[i] = angka[j];
            angka[j] = temp;
           }
       }
       ProsesSorting(angka, n);
    }
    puts("");
    puts("===Selection Sort===");

    int x;
    for (x = 0; x < n; x++)
    {
        printf("Data ke - %d : %d \n",x+1 ,angka[x]);
    }printf("\n");
}


int BinarySearch ( int n , int angka[], int cari)
{
    int akhir ,awal ,tengah ,ketemu , i;


    akhir = n - 1; awal = 0; ketemu = -1; i = 0;
    while ( ketemu == -1 && i < n )
    {   
        tengah = ( awal+ akhir ) / 2;
            if ( angka[tengah] == cari )
        {
            ketemu = tengah;
        }
        else
        {
            if ( angka[tengah] < cari )
            {
                awal = tengah + 1;
            }
            else
            {
                akhir = tengah - 1;
            }
        }i++;
    }return ketemu;
}