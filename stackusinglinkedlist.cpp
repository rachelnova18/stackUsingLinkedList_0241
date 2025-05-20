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

class Stack // membuat class stack
{
private:       // akses modifier
    Node *top; // pointer ke node teratas

public:     // akses modifier
    Stack() // constructor stack
    {
        top = NULL; // inisialisasi top dengan NULL
    }
    int push(int value) // fungsi untuk menambahkan data ke stack
    