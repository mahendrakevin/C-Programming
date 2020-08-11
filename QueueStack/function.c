#include "header.h"

void createEmpty(Queue *Q)
{
    Tail(*Q) = Nil;
    Head(*Q) = Nil;
}

address Alokasi(int X)
{
    address P;
    P = malloc(sizeof(ElmtQueue));
    if(P!=Nil)
    {
        Info(P)=X;
        Next(P)=Nil;
    }
    return P;
}

void Add(Queue *Q, int X)
{
    address P;
    P=Alokasi(X);
    if(Head(*Q)==Nil)
    {
        Head(*Q) = P;
        Tail(*Q) = P;
    }
    else
    {
        Next(Tail(*Q)) = P;
        Tail(*Q) = P;
    }
}

void Del(Queue *Q, int *X)
{

}

void Cetak(Queue Q)
{
    address P;
    P=Head(Q);
    while(P!=Nil)
    {
        printf("\n%d ->", Info(P));
        P=Next(P);
    }
}
