#include "pustaka.h"

/*
    Nama    : Kevin Indra Mahendra
    NIM     : A11.2017.10325
*/

int main()
{
    Stack S;
    CreateEmpty(&S);
    Push(&S,1);
    Push(&S,2);
    Push(&S,3);
    Push(&S,4);
    Push(&S,5);
    Cetak(S);
    printf("\nPop Stack List");
    int X;
    Poop(&S,&X);
    Cetak(S);
    return 0;
}
