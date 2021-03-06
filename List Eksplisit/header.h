#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <boolean.h>
#define NILL NULL

//ADT List Eksplisit
typedef int infotype;
typedef struct tElmtList *address;
typedef address List;
//Struct Elemen
typedef struct
{
    infotype Info;
    address Next;
}ElmtList;
//Struct List
typedef struct
{
    address First;
}List;

//Macro
#define Next(P) (P)->Next
#define Info(P) (P)->Info
#define First(L) (L).First

void creatList(List *L);
boolean listEmpty(List L);
address Alokasi(infotype X);
void insertFirst(List *L, address P);
void insVFirst(List *L, infotype X);
void printInfo(List L);

#endif // HEADER_H_INCLUDED
