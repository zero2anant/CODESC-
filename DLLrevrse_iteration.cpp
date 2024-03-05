#include <iostream>
using namespace std ; 
class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};


Node* reverseDLL(Node* head)
{   
    Node * curr = head ;
    Node * temp = NULL ; 
    while (curr != NULL) {
    temp = curr->next;
    curr->next = curr->prev;
    curr->prev = temp;
    if (temp == NULL) break; 
    curr = temp;
}

   head = curr ;
   return head ;
}

int main() {
    //try insert fuction and reverse function of doubly linked list 
    reverseDLL(head) ;
    return 0;
}
