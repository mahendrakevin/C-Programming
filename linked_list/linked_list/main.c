#include "header.h"
/// NAMA : ADIS WING KASENDA
/// NIM  : A11.2017.10316

/// NAMA : KEVIN INDRA MAHENDRA
/// NIM  : A11.2017.10325

int main()
{
    List L1;
    createList(&L1);
    puts("insert depan ");
    insertValueFirst(&L1,1);
    insertValueFirst(&L1,2);
    insertValueFirst(&L1,3);
    insertValueFirst(&L1,4);
    printList(L1);

    insertValueLast(&L1,5);
    insertValueLast(&L1,6);
    insertValueLast(&L1,7);
    insertValueLast(&L1,8);
    insertValueLast(&L1,9);
    puts("\n\nInsert depan + insert belakang");
    printList(L1);

    puts("\n\nHasil sesudah dihapus depan");
    deleteFirst(&L1);
    printList(L1);

    deleteLast(&L1);
    puts("\n\nSesudah dihapus depan dan hapus belakang");
    printList(L1);
    puts("\n");
    return 0;
}
