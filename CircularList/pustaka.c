#include "pustaka.h"
void CreateEmpty (Stack *S){
    Top(*S)=Nil;
}
address Alokasi(int X){
    address P;
    P=malloc(sizeof(ElmtStack));
    if(P!=Nil){
        Info(P) = X;
        Next(P) = Nil;
    }
    else
    {
        P=Nil;
    }
    return P;
}

void Dealokasi(address P)
{
    Next(P)=Nil;
    Info(P)=P;
}

boolean IsEmpty(Stack S)
{
    if(Top(S)==Nil)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Push(Stack *S, int X){
    address P;
    P=Alokasi(X);
    Next(P) = Top(*S);
    Top(*S) = P;
}
void Poop(Stack *S, int *X){
    address P;
    if(IsEmpty(*S))
    {
        printf("Null");
    }
    else
    {
        P=Top(*S);
        *X=Info(P);
        Top(*S)=Next(Top(*S));
        Next(P) = Nil;
        Dealokasi(&P);
    }
}
void Cetak(Stack S){
    address P;
    P=Top(S);
    while(P!=Nil)
    {
        printf("\n%d", Info(P));
        P=Next(P);
    }
}
