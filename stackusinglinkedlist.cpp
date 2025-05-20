#include <iostream>
using namespace std;

class Node // membuat node
{
public:         // akses modifier
    int data;   // data yang disimpan
    Node *next; // pointer ke node berikutnya
    // constructor

    Node() // node constructor
    {
        next = NULL; // inisialisasi next dengan NULL
    }
};

