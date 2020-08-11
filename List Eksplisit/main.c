#include "header.h"

int main()
{
    List L1;
    createList(&L1);
    insVFirst(&L1, 10);
    insVFirst(&L1, 15);
    insVFirst(&L1, 19);
    printInfo(L1);
    return 0;
}
