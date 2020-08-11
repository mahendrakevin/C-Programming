#include "header.h"

/*
    Nama    : Kevin Indra Mahendra
    NIM     : A11.2017.10325
*/

int main()
{
    Queue Q1;
    int x;
    CreateEmpty(&Q1);
    puts("=============================");
    printf("Queue Still Empty ? %d\n\n",isempty(Q1));
    puts("=============================");
    puts("QUEUE Before Deleted\n");
    puts("=============================");
    AddElmt(&Q1,1);
    AddElmt(&Q1,2);
    AddElmt(&Q1,3);
    AddElmt(&Q1,4);
    AddElmt(&Q1,5);
    AddElmt(&Q1,6);
    AddElmt(&Q1,7);
    AddElmt(&Q1,8);
    AddElmt(&Q1,9);
    AddElmt(&Q1,10);
    puts("=============================");
    cetak(Q1);
    puts("=============================");
    x=NBElmt(Q1);
    puts("=============================");
     printf("Queue Still Empty ? %d\n",isempty(Q1));
     puts("=============================");
    printf("\nQueue Data = %d\n",x);
    puts("=============================");
    Del(&Q1);
    Del(&Q1);
    Del(&Q1);
    Del(&Q1);
    Del(&Q1);
    Del(&Q1);
    x=NBElmt(Q1);
    puts("=============================");
    puts("Queue After Deleted !\n");
    puts("=============================");
    cetak(Q1);
    puts("=============================");
    printf("\nQueue Data = %d\n",x);
    puts("=============================");
    return 0;
}
