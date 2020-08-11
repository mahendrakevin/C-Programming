#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char
#define Nil NULL

typedef int Infotype;
typedef struct tElmtList *address;
typedef struct tElmtList{
    Infotype Info;
    address Next;
}ElmtList;
typedef struct{
    address First;
}List;
#define Next(P) (P)->Next
#define Info(P) (P)->Info
#define First(L) (L).First

void createList (List *L);
address Alokasi(Infotype X);

void insertFirst(List *L, address P);
void insertValueFirst(List *L, Infotype X);
void insertAfter(List *L,address Prec, address P);
void insertLast (List *L, address P);
void insertValueLast (List *L, Infotype X);

void printList(List L);

void deleteLast (List *L);
void deleteFirst (List *L);

#endif // PUSTAKA_H_INCLUDED
