#include "header.h"
void createList (List *L){
    First(*L)=Nil;
}
address Alokasi(Infotype X){
    address P;
    P=(address)malloc(sizeof(ElmtList));
    Info(P)=X;
    Next(P)=Nil;
    return P;
}

void insertFirst(List *L, address P){
    Next(P)=First(*L);
    First(*L)=P;
}
void insertValueFirst(List *L, Infotype X){
    address P;
    P=Alokasi(X);
    if(P!=Nil){
        insertFirst(&(*L),P);
    }
}

void printList(List L){
    address P;
    P=First(L);
    while(P!=Nil){
        printf("|%d|", Info(P));
        P=Next(P);
    }
}
void insertAfter(List *L,address Prec, address P){
    Next(P)=Next(Prec);
    Next(Prec)=P;
}

void insertLast (List *L, address P){
    address Last;
    Last=First(*L);
    while(Next(Last)!=Nil){
        Last=Next(Last);
    }
    insertAfter(&(*L),Last,P);
}

void insertValueLast (List *L, Infotype X){
    address P;
    P=Alokasi(X);
    if (P!=Nil){
        insertLast(&(*L),P);
    }
}

void deleteLast (List *L){
    address prevLast;
    prevLast=First(*L);
    while(Next(Next(prevLast))!=Nil){
        prevLast=Next(prevLast);
    }
    Next(prevLast)=Nil;
}

void deleteFirst (List *L){
    address P;
    P=First(*L);
    First(*L)=Next(First(*L));
    free(P);
}


