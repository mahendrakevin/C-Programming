#include "header.h"

int main()
{
    Queue Q1;
    createEmpty(&Q1);
    Add(&Q1, 1);
    Add(&Q1, 2);
    Add(&Q1, 3);
    Add(&Q1, 4);
    Add(&Q1, 5);
    Cetak(Q1);
    return 0;
}
