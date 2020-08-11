#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#define boolean unsigned char
#define Nil NULL
#define true 1
#define false 0

///elemen Queue
typedef int infotype;
typedef struct ElmtQueue *address;
typedef struct ElmtQueue{
    infotype INFO;
    address NEXT;
}ElmtQueue;

///QUEUE
typedef struct {
    address HEAD ;
    address TAIL;
}Queue;

///macro QUEUE
#define Head(Q) (Q).HEAD
#define Tail(Q) (Q).TAIL
#define InfoHead(Q) (Q).HEAD->INFO
#define InfoTail(Q) (Q).TAIL->INFO

///macro elemen
#define Info(P) (P)->INFO
#define Next(P) (P)->NEXT

void CreateEmpty (Queue *Q);
void dealokasi (address *P);
boolean isempty (Queue Q);
int NBElmt (Queue Q);
address Alokasi (infotype X);
void AddElmt(Queue *Q,infotype X);
void Del (Queue *Q);
void cetak (Queue Q);

#endif // HEADER_H_INCLUDED
