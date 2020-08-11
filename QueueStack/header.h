#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#define true 1
#define false 0
#define boolean unsigned char
#define Nil NULL
#include <stdio.h>
#include <stdlib.h>

typedef struct ElmtQueue *address;
typedef struct ElmtQueue
{
    int Info;
    address Next;
}ElmtQueue;

typedef struct
{
    address Head;
    address Tail;
}Queue;

#define Next(P) (P)->Next
#define Info(P) (P)->Info
#define Tail(Q) (Q).Tail
#define Head(Q) (Q).Head
#define InfoTail(Q) Q.Tail->Info
#define InfoHead(Q) Q.Head->Info

void createEmpty(Queue *Q);
address Alokasi(int X);
void Add(Queue *Q, int X);
void Del(Queue *Q, int *X);
void Cetak(Queue Q);

#endif // HEADER_H_INCLUDED
