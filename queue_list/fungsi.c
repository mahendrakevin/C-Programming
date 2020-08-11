#include "header.h"

void CreateEmpty (Queue *Q){
    Head(*Q)=Nil;
    Tail(*Q)=Nil;
}
void dealokasi (address *P){
    Next(*P)=NULL;

boolean isempty (Queue Q){
    if (Tail(Q)==Nil&&Head(Q)==Nil)
        return 1;
    else
        return 0;
}
int NBElmt (Queue Q){
    int x=0;
    if (Tail(Q)==Nil)
        return x;
    else{
        address P;
        P=Head(Q);
        while (P!=Nil){
            x++;
            P=Next(P);
        }
        return x;
    }
}
address Alokasi (infotype X){
    address P;
    P=(address)malloc(sizeof(ElmtQueue));
    Info(P)=X;
    Next(P)=Nil;
    return P;
}
void AddElmt(Queue *Q,infotype X){
    address P;
    P=Alokasi(X);
    if (isempty(*Q)){
        Head(*Q)=P;
        Tail(*Q)=P;
    }
    else{
        Next(Tail(*Q))=P;
        Tail(*Q)=P;
    }
}
void Del (Queue *Q){
    address P;
    P=Head(*Q);
    while (Info(Next(P))!=InfoTail(*Q)){
        P=Next(P);
    }
    Tail(*Q)=P;
    dealokasi(&P);
}
void cetak (Queue Q){
    address P;
    P=Head(Q);
    while (P!=Nil){
        printf("[%d]\n",Info(P));
        P=Next(P);
    }
}