#include "pustaka.h"

/*
    Nama    : Kevin Indra Mahendra
    NIM     : A11.2017.10325
*/

int main()
{
    int nilai, batas, i, X, arr[i];
    Stack S;
    CreateEmpty(&S);
    system("cls");
    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &batas);
    printf("\n Enter the elements of the array : ");
    for(i=0;i<batas;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<batas;i++)
    {
       Push(&S, arr[i]);
    }
    for(i=0;i<batas;i++)
    {
        Poop(&S, &arr[i]);
    }
    printf("\n The reserved array is : ");
    for(i=0;i<batas;i++)
    {
        printf("\n %d", X);
    }
    getch();
    return 0;
}
