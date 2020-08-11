#include "header.h"

void creatList(List *L)
{
    First(*L)=NULL;
}

boolean listEmpty(List L)
{
    return First(L)==NULL;
}

address Alokasi(infotype X)
{
    address P;
    P=(address)malloc(sizeof(ElmtList));
    if(P!=NULL)
    {
        Info(P)=X;
        Next(P)=NULL;
    }
}

void insertFirst(List *L, address P)
{
    Next(P)=First(*L);
    First(*L)=P;
}

void insVFirst(List *L, infotype X)
{
    address P;
    P=Alokasi(X);
    if(P!=NULL)
    {
        insertFirst(&(*L), P);
    }
}

void printInfo(List L)
{
    address P;
    if(listEmpty(L))
    {
        printf("\nList Kosong");
    }
    else
    {
        P=First(L);
        while(!=NULL)
        {
            printf("%d\t", Info((P)))
        }
    }
}
