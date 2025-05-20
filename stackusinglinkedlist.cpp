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
    {
        Node *newNode = new Node(); // membuat node baru
        newNode->data = value;      // menyimpan data ke node baru
        newNode->next = top;
        top = newNode; // node baru menjadi top
        cout << "push value: " << value << endl;
        return value;
    }

    void pop() //fungsi untuk menghapus data dari stack
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }

        cout << "popped value: " << top->data << endl; // menampilkan data yang dihapus
        top = top->next; // node berikutnya menjadi top
    }

    void peek() // fungsi untuk menampilkan data teratas
    {
        if (top == NULL) //jika stack kosong 
        {
            cout << "List is Empty. " << endl; // menampilkan pesan
        }
        else // jika stack tidak kosong
        {
            Node *current = top;    // pointer ke node teratas
            while (current != NULL) // selama current tidak NULL
            {
                cout << current->data << " " << endl; // menampilkan data
                current = current->next;              // pindah ke node berikutnya
            }
            cout << endl;
        }
    }

    