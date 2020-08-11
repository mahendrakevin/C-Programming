#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

#define Nil NULL

typedef struct ElmtStack *address;
typedef struct ElmtStack{
    int INFO;
    address NEXT;
}ElmtStack;
typedef struct{
    address TOP
}Stack;

#define Next(P) (P)->NEXT
#define Info(P) (P)->INFO
#define Top(S) (S).TOP
#define InfoTop(S) (S).TOP->INFO

void CreateEmpty (Stack *S);
address Alokasi(int X);
void Push(Stack *S, int X);
void Poop(Stack *S, int *X);
void Cetak(Stack S);

#endif // PUSTAKA_H_INCLUDED
